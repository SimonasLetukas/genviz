from unittest import TestCase

from source.functions import Functions


class TestFunctions(TestCase):
    def test_get_column_list_from_input(self):
        f = Functions()
        self.assertEqual(f.get_column_list_from_input("1,2,3"), [0, 1, 2])
        self.assertEqual(f.get_column_list_from_input(" 1,   2 ,,  "), [0, 1])
        self.assertEqual(f.get_column_list_from_input("1,6,13"), [0, 5, 12])
        self.assertEqual(f.get_column_list_from_input("1.1"), [])
        self.assertEqual(f.get_column_list_from_input("4,2,1"), [0, 1, 3])
        self.assertEqual(f.get_column_list_from_input("1-"), [0])
        self.assertEqual(f.get_column_list_from_input(" 1 - 3 "), [0, 1, 2])
        self.assertEqual(f.get_column_list_from_input("1-2,3"), [0, 1, 2])
        self.assertEqual(f.get_column_list_from_input("1-2,3-", 10), [0, 1, 2, 3, 4, 5, 6, 7, 8, 9])
        self.assertEqual(f.get_column_list_from_input("1-2,3-", 3), [0, 1, 2])
        self.assertEqual(f.get_column_list_from_input("1-2,3-", 1), [0])
        self.assertEqual(f.get_column_list_from_input("  1 ,  3 - 6  "), [0, 2, 3, 4, 5])
        self.assertEqual(f.get_column_list_from_input("-1,0,1"), [0])
        self.assertEqual(f.get_column_list_from_input("-10,0,1"), [0, 1, 2, 3, 4, 5, 6, 7, 8, 9])

    def test_is_none_or_whitespace(self):
        f = Functions()
        self.assertEqual(f.is_none_or_whitespace(None), True)
        self.assertEqual(f.is_none_or_whitespace(' '), True)
        self.assertEqual(f.is_none_or_whitespace(" "), True)
        self.assertEqual(f.is_none_or_whitespace(''), True)
        self.assertEqual(f.is_none_or_whitespace(""), True)
        self.assertEqual(f.is_none_or_whitespace("a"), False)
        self.assertEqual(f.is_none_or_whitespace("  a  "), False)
