import re


class Functions:

    @staticmethod
    def is_none_or_whitespace(string: str):
        if string is None:
            return True
        return bool(string.strip()) is False

    def get_column_list_from_input(self, string: str, maximum_column_length=None):
        if string is None or string.strip() is False:
            return None

        minimum_index = 0
        columns_in_range = []

        if '-' in string:
            all_splits = [str(x) for x in string.split(',') if x.strip().isdigit() is False]
            print(all_splits)
            for glyph in all_splits:
                if '-' not in glyph:
                    continue

                regex = re.compile('-.*')
                beginning = [found for found in glyph if re.fullmatch(regex, glyph)]
                if beginning:
                    array = list(range(0, int(glyph.replace('-', '').strip())))
                    print(f'Taking {array} from {glyph}')
                    columns_in_range = columns_in_range + array
                    continue

                regex = re.compile('.*-')
                ending = [found for found in glyph if re.fullmatch(regex, glyph)]
                if ending:
                    array = [int(glyph.replace('-', '').strip()) - 1] if maximum_column_length is None \
                        else list(range(int(glyph.replace('-', '').strip()) - 1, maximum_column_length))
                    print(f'Taking {array} from {glyph}')
                    columns_in_range = columns_in_range + array
                    continue

                start_end = [int(x) for x in glyph.split('-') if x.strip().isdigit()]
                print(f'startend: {start_end}, length: {len(start_end)}')
                if len(start_end) == 2:
                    array = list(range(start_end[0] - 1, start_end[1]))
                    print(f'Taking {array} from {glyph}')
                    columns_in_range = columns_in_range + array

        columns = [x - 1 for x in [int(x) for x in string.split(',') if x.strip().isdigit()]]
        columns_up_to_minimum = self.remove_all_before(sorted(set(columns + columns_in_range)), minimum_index)
        return columns_up_to_minimum if maximum_column_length is None \
            else self.remove_all_after(columns_up_to_minimum, maximum_column_length)

    @staticmethod
    def remove_all_before(item, border):
        try:
            index = item.index(border)
            return item[index:]
        except ValueError:
            return item

    @staticmethod
    def remove_all_after(item, border):
        try:
            index = item.index(border)
            return item[:index]
        except ValueError:
            return item
