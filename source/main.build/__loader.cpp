
/* Code to register embedded modules for meta path based loading if any. */

#include <Python.h>

/* Use a hex version of our own to compare for versions. We do not care about pre-releases */
#if PY_MICRO_VERSION < 16
#define PYTHON_VERSION (PY_MAJOR_VERSION * 256 + PY_MINOR_VERSION * 16 + PY_MICRO_VERSION)
#else
#define PYTHON_VERSION (PY_MAJOR_VERSION * 256 + PY_MINOR_VERSION * 16 + 15)
#endif

#include "nuitka/constants_blob.h"

#include "nuitka/unfreezing.h"

/* Type bool */
#ifndef __cplusplus
#include "stdbool.h"
#endif

#if 557 > 0
static unsigned char *bytecode_data[557];
#else
static unsigned char **bytecode_data = NULL;
#endif

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
extern PyObject *modulecode_AnyQt(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_AnyQt$QtCore(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_AnyQt$QtGui(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_AnyQt$QtOpenGL(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_AnyQt$QtWebEngineWidgets(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_AnyQt$QtWidgets(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_AnyQt$_api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_AnyQt$_ctypes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_AnyQt$_fixes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_AnyQt$importhooks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_AnyQt$sip(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_AnyQt$uic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$ARB(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$ARB$ES2_compatibility(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$ARB$ES3_compatibility(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$ARB$arrays_of_arrays(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$ARB$base_instance(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$ARB$clear_buffer_object(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$ARB$compressed_texture_pixel_storage(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$ARB$compute_shader(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$ARB$conservative_depth(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$ARB$copy_image(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$ARB$enhanced_layouts(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$ARB$explicit_uniform_location(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$ARB$fragment_layer_viewport(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$ARB$framebuffer_no_attachments(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$ARB$get_program_binary(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$ARB$imaging(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$ARB$internalformat_query(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$ARB$internalformat_query2(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$ARB$invalidate_subdata(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$ARB$map_buffer_alignment(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$ARB$multi_draw_indirect(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$ARB$program_interface_query(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$ARB$robust_buffer_access_behavior(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$ARB$separate_shader_objects(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$ARB$shader_atomic_counters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$ARB$shader_image_load_store(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$ARB$shader_image_size(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$ARB$shader_objects(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$ARB$shader_precision(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$ARB$shader_storage_buffer_object(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$ARB$shading_language_420pack(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$ARB$shading_language_packing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$ARB$stencil_texturing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$ARB$texture_buffer_object(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$ARB$texture_buffer_range(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$ARB$texture_query_levels(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$ARB$texture_storage(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$ARB$texture_storage_multisample(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$ARB$texture_view(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$ARB$transform_feedback_instanced(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$ARB$uniform_buffer_object(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$ARB$vboimplementation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$ARB$vertex_attrib_64bit(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$ARB$vertex_attrib_binding(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$ARB$vertex_buffer_object(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$ARB$viewport_array(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$KHR(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$KHR$debug(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$VERSION(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$VERSION$GL_1_0(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$VERSION$GL_1_1(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$VERSION$GL_1_2(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$VERSION$GL_1_2_images(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$VERSION$GL_1_3(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$VERSION$GL_1_4(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$VERSION$GL_1_5(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$VERSION$GL_2_0(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$VERSION$GL_2_1(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$VERSION$GL_3_0(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$VERSION$GL_3_1(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$VERSION$GL_3_2(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$VERSION$GL_3_3(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$VERSION$GL_4_0(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$VERSION$GL_4_1(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$VERSION$GL_4_2(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$VERSION$GL_4_3(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$VERSION$GL_4_4(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$VERSION$GL_4_5(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$VERSION$GL_4_6(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$exceptional(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$feedback(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$glget(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$images(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$pointers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$selection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GL$vboimplementation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GLU(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GLU$glunurbs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GLU$glustruct(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GLU$projection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GLU$quadrics(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$GLU$tess(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$_bytes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$_configflags(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$_null(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$_opaque(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$acceleratesupport(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$arrays(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$arrays$_arrayconstants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$arrays$_buffers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$arrays$arraydatatype(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$arrays$arrayhelpers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$arrays$buffers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$arrays$ctypesarrays(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$arrays$ctypesparameters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$arrays$ctypespointers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$arrays$formathandler(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$arrays$lists(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$arrays$nones(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$arrays$numbers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$arrays$numpymodule(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$arrays$strings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$arrays$vbo(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$constant(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$constants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$contextdata(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$converters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$error(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$extensions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$images(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$latebind(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$lazywrapper(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$logs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$platform(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$platform$baseplatform(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$platform$ctypesloader(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$platform$win32(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$plugins(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$ARB(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$ARB$ES2_compatibility(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$ARB$ES3_compatibility(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$ARB$arrays_of_arrays(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$ARB$base_instance(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$ARB$clear_buffer_object(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$ARB$compressed_texture_pixel_storage(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$ARB$compute_shader(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$ARB$conservative_depth(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$ARB$copy_image(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$ARB$enhanced_layouts(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$ARB$explicit_uniform_location(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$ARB$fragment_layer_viewport(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$ARB$framebuffer_no_attachments(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$ARB$get_program_binary(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$ARB$imaging(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$ARB$internalformat_query(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$ARB$internalformat_query2(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$ARB$invalidate_subdata(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$ARB$map_buffer_alignment(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$ARB$multi_draw_indirect(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$ARB$program_interface_query(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$ARB$robust_buffer_access_behavior(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$ARB$separate_shader_objects(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$ARB$shader_atomic_counters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$ARB$shader_image_load_store(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$ARB$shader_image_size(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$ARB$shader_objects(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$ARB$shader_precision(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$ARB$shader_storage_buffer_object(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$ARB$shading_language_420pack(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$ARB$shading_language_packing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$ARB$stencil_texturing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$ARB$texture_buffer_object(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$ARB$texture_buffer_range(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$ARB$texture_query_levels(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$ARB$texture_storage(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$ARB$texture_storage_multisample(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$ARB$texture_view(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$ARB$transform_feedback_instanced(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$ARB$uniform_buffer_object(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$ARB$vertex_attrib_64bit(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$ARB$vertex_attrib_binding(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$ARB$vertex_buffer_object(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$ARB$viewport_array(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$KHR(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$KHR$debug(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$VERSION(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$VERSION$GL_1_0(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$VERSION$GL_1_1(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$VERSION$GL_1_2(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$VERSION$GL_1_3(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$VERSION$GL_1_4(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$VERSION$GL_1_5(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$VERSION$GL_2_0(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$VERSION$GL_2_1(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$VERSION$GL_3_0(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$VERSION$GL_3_1(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$VERSION$GL_3_2(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$VERSION$GL_3_3(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$VERSION$GL_4_0(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$VERSION$GL_4_1(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$VERSION$GL_4_2(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$VERSION$GL_4_3(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$VERSION$GL_4_4(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$VERSION$GL_4_5(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$VERSION$GL_4_6(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$_errors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$_glgets(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$_lookupint(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GL$_types(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GLU(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GLU$annotations(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$raw$GLU$constants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_OpenGL$wrapper(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$BmpImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GifImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GimpGradientFile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GimpPaletteFile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$Image(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageChops(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageColor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageFile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageFilter(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageMode(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageOps(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImagePalette(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageQt(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageSequence(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageShow(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageTk(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$JpegImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$JpegPresets(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$MpoImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PaletteFile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PngImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PpmImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PyAccess(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$TiffImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$TiffTags(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_binary(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_tkinter_finder(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PyQt5(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PyQt5$$45$preLoad(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PyQt5$QtCore$$45$postLoad(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PyQt5$uic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PyQt5$uic$Compiler(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PyQt5$uic$Compiler$compiler(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PyQt5$uic$Compiler$indenter(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PyQt5$uic$Compiler$misc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PyQt5$uic$Compiler$proxy_metaclass(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PyQt5$uic$Compiler$qobjectcreator(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PyQt5$uic$Compiler$qtproxies(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PyQt5$uic$Loader(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PyQt5$uic$Loader$loader(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PyQt5$uic$Loader$qobjectcreator(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PyQt5$uic$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PyQt5$uic$icon_cache(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PyQt5$uic$objcreator(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PyQt5$uic$port_v3(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PyQt5$uic$port_v3$as_string(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PyQt5$uic$port_v3$ascii_upper(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PyQt5$uic$port_v3$proxy_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PyQt5$uic$port_v3$string_io(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PyQt5$uic$properties(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PyQt5$uic$uiparser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode___main__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode___parents_main__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_asgiref(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_asgiref$current_thread_executor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_asgiref$local(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_asgiref$sync(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_certifi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_certifi$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$cffi_opcode(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$commontypes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$cparser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$error(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$ffiplatform(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$lock(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$model(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$pkgconfig(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$recompiler(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$vengine_cpy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$vengine_gen(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$verifier(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_coloredlogs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_coloredlogs$syslog(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_confapp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_confapp$settings_manager(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cv2(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cv2$data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cv2$load_config_py3(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cv2$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cycler(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$_common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$easter(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$parser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$parser$_parser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$parser$isoparser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$relativedelta(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$rrule(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz$_common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz$_factories(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz$tz(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz$win(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$zoneinfo(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_defusedxml(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_defusedxml$ElementTree(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_defusedxml$cElementTree(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_defusedxml$common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_defusedxml$expatbuilder(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_defusedxml$expatreader(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_defusedxml$minidom(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_defusedxml$pulldom(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_defusedxml$sax(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_defusedxml$xmlrpc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dill(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dill$_dill(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dill$_objects(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dill$detect(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dill$info(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dill$objtypes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dill$pointers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dill$settings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dill$source(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dill$temp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$apps(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$apps$config(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$apps$registry(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$conf(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$conf$global_settings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$conf$locale(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$conf$urls(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$contrib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$contrib$staticfiles(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$contrib$staticfiles$storage(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$contrib$staticfiles$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$core$cache(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$core$cache$backends(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$core$cache$backends$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$core$cache$backends$filebased(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$core$checks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$core$checks$async_checks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$core$checks$caches(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$core$checks$compatibility(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$core$checks$compatibility$django_4_0(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$core$checks$database(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$core$checks$files(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$core$checks$messages(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$core$checks$model_checks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$core$checks$registry(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$core$checks$security(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$core$checks$security$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$core$checks$security$csrf(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$core$checks$security$sessions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$core$checks$templates(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$core$checks$translation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$core$checks$urls(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$core$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$core$files(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$core$files$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$core$files$images(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$core$files$locks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$core$files$move(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$core$files$storage(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$core$files$temp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$core$files$uploadedfile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$core$files$uploadhandler(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$core$files$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$core$mail(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$core$mail$message(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$core$mail$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$core$management(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$core$management$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$core$management$color(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$core$paginator(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$core$serializers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$core$serializers$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$core$serializers$json(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$core$serializers$python(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$core$signals(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$core$signing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$core$validators(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$backends(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$backends$oracle(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$backends$oracle$functions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$backends$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$migrations(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$migrations$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$migrations$executor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$migrations$graph(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$migrations$loader(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$migrations$migration(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$migrations$operations(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$migrations$operations$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$migrations$operations$fields(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$migrations$operations$models(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$migrations$operations$special(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$migrations$recorder(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$migrations$state(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$migrations$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$models(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$models$aggregates(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$models$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$models$constants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$models$constraints(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$models$deletion(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$models$enums(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$models$expressions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$models$fields(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$models$fields$files(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$models$fields$json(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$models$fields$mixins(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$models$fields$proxy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$models$fields$related(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$models$fields$related_descriptors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$models$fields$related_lookups(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$models$fields$reverse_related(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$models$functions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$models$functions$comparison(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$models$functions$datetime(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$models$functions$math(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$models$functions$mixins(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$models$functions$text(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$models$functions$window(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$models$indexes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$models$lookups(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$models$manager(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$models$options(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$models$query(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$models$query_utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$models$signals(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$models$sql(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$models$sql$constants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$models$sql$datastructures(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$models$sql$query(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$models$sql$subqueries(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$models$sql$where(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$models$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$transaction(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$db$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$dispatch(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$dispatch$dispatcher(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$forms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$forms$boundfield(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$forms$fields(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$forms$forms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$forms$formsets(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$forms$models(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$forms$renderers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$forms$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$forms$widgets(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$http(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$http$cookie(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$http$multipartparser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$http$request(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$http$response(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$middleware(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$middleware$csrf(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$template(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$template$autoreload(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$template$backends(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$template$backends$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$template$backends$django(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$template$backends$jinja2(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$template$backends$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$template$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$template$context(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$template$engine(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$template$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$template$library(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$template$loader(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$template$response(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$template$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$templatetags(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$templatetags$static(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$urls(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$urls$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$urls$conf(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$urls$converters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$urls$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$urls$resolvers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$urls$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$utils$_os(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$utils$autoreload(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$utils$cache(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$utils$connection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$utils$crypto(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$utils$datastructures(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$utils$dateformat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$utils$dateparse(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$utils$dates(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$utils$deconstruct(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$utils$decorators(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$utils$deprecation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$utils$duration(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$utils$encoding(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$utils$formats(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$utils$functional(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$utils$hashable(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$utils$html(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$utils$http(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$utils$inspect(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$utils$ipv6(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$utils$itercompat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$utils$log(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$utils$module_loading(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$utils$numberformat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$utils$regex_helper(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$utils$safestring(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$utils$termcolors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$utils$text(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$utils$timezone(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$utils$topological_sort(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$utils$translation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$utils$translation$reloader(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$utils$translation$template(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$utils$translation$trans_null(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$utils$translation$trans_real(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$utils$tree(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$utils$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$views(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$views$decorators(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$views$decorators$csrf(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$views$defaults(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$views$generic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$views$generic$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$views$generic$dates(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$views$generic$detail(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$views$generic$edit(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_django$views$generic$list(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_filelock(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_filelock$_api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_filelock$_error(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_filelock$_soft(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_filelock$_unix(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_filelock$_util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_filelock$_windows(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_filelock$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gui(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_humanfriendly(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_humanfriendly$compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_humanfriendly$decorators(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_humanfriendly$deprecation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_humanfriendly$terminal(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_humanfriendly$text(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_humanfriendly$usage(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$_identifier(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$async_utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$bccache(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$compiler(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$constants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$debug(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$defaults(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$environment(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$filters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$idtracking(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$lexer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$loaders(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$nodes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$optimizer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$parser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$runtime(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$tests(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$visitor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kiwisolver(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_local_settings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_markupsafe(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_markupsafe$_native(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_api$deprecation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_blocking_input(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_cm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_cm_listed(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_color_data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_constrained_layout(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_enums(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_layoutgrid(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_mathtext(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_mathtext_data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_pylab_helpers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_text_helpers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$afm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$artist(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$axes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$axes$_axes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$axes$_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$axes$_secondary_axes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$axes$_subplots(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$axis(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backend_bases(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backend_managers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backend_tools(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backends(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backends$_backend_tk(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backends$backend_agg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backends$backend_qt(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backends$backend_qt5(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backends$backend_qt5agg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backends$backend_qtagg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backends$backend_tkagg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backends$backend_webagg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backends$backend_webagg_core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backends$qt_compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backends$qt_editor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backends$qt_editor$_formlayout(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backends$qt_editor$figureoptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$bezier(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$category(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$cbook(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$cm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$collections(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$colorbar(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$colors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$container(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$contour(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$dates(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$docstring(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$dviread(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$figure(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$font_manager(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$fontconfig_pattern(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$gridspec(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$hatch(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$image(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$legend(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$legend_handler(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$lines(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$markers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$mathtext(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$mlab(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$offsetbox(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$patches(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$path(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$patheffects(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$projections(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$projections$geo(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$projections$polar(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$pyplot(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$quiver(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$rcsetup(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$scale(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$spines(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$stackplot(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$streamplot(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$style(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$style$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$table(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$texmanager(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$text(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$textpath(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$ticker(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tight_bbox(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tight_layout(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$transforms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$triangulation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$tricontour(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$trifinder(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$triinterpolate(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$tripcolor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$triplot(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$trirefine(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$tritools(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$units(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$widgets(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits$mplot3d(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits$mplot3d$art3d(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits$mplot3d$axes3d(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits$mplot3d$axis3d(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits$mplot3d$proj3d(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_multiprocessing$$45$postLoad(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_multiprocessing$$45$preLoad(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_natsort(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_natsort$compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_natsort$compat$fake_fastnumbers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_natsort$compat$fastnumbers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_natsort$compat$locale(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_natsort$natsort(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_natsort$ns_enum(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_natsort$unicode_numbers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_natsort$unicode_numeric_hex(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_natsort$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$__config__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_distributor_init(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_globals(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_pytesttester(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$compat$_inspect(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$compat$py3k(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_add_newdocs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_add_newdocs_scalars(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_asarray(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_dtype(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_dtype_ctypes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_internal(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_machar(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_methods(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_string_helpers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_type_aliases(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_ufunc_config(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$arrayprint(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$defchararray(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$einsumfunc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$fromnumeric(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$function_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$getlimits(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$memmap(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$multiarray(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$numeric(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$numerictypes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$overrides(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$records(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$shape_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$umath(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ctypeslib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$fft(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$fft$_pocketfft(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$fft$helper(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$_datasource(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$_iotools(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$arraypad(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$arraysetops(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$arrayterator(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$format(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$function_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$histograms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$index_tricks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$mixins(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$nanfunctions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$npyio(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$polynomial(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$scimath(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$shape_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$stride_tricks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$twodim_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$type_check(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$ufunclike(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$linalg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$linalg$linalg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma$extras(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma$mrecords(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$matrixlib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$matrixlib$defmatrix(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$_polybase(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$chebyshev(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$hermite(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$hermite_e(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$laguerre(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$legendre(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$polynomial(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$polyutils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$random(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$random$_pickle(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$typing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$typing$_add_docstring(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$typing$_array_like(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$typing$_char_codes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$typing$_dtype_like(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$typing$_generic_alias(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$typing$_nbit(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$typing$_nested_sequence(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$typing$_scalars(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$typing$_shape(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms$basewidget(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms$controls(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$allcontrols(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$appmanager(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$basewidget(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_boundingslider(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_button(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_checkbox(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_checkboxlist(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_codeeditor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_combo(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_dir(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_dockwidget(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_emptywidget(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_event_timeline(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_event_timeline$control_eventtimeline(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_event_timeline$events(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_event_timeline$events$event(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_event_timeline$events$pointer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_event_timeline$events$track(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_event_timeline$events$win_event(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_event_timeline$events$win_track(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_event_timeline$graphs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_event_timeline$graphs$graph(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_event_timeline$graphs$win_events_generator(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_event_timeline$graphs$win_graph_properties(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_event_timeline$graphs$win_graph_to_event(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_event_timeline$timeline_widget(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_event_timeline$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_event_timeline$utils$import_window(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_events_graph(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_events_graph$Event(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_events_graph$EventsWidget(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_events_graph$Pointer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_events_graph$Track(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_events_graph$control_eventsgraph(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_file(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_filestree(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_image(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_label(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_list(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_matplotlib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_mdiarea(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_number(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_opengl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_password(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_player(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_player$AbstractGLWidget(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_player$VideoGLWidget(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_player$VideoQt5GLWidget(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_player$control_player(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_player$multiple_videocapture(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_progress(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_slider(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_tableview(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_text(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_textarea(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_toolbox(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_toolbutton(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_tree(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_treeview(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_visvis(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_visvisvolume(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$controls$control_web(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$dialogs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$dialogs$csv_parser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$organizers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$settings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_gui$utils$tools(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$allcontrols(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$basewidget(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_autocomplete(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_barschart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_boundingslider(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_breadcrumb(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_button(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_calendar(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_checkbox(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_checkboxlist(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_checkboxlistquery(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_codemirror(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_combo(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_date(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_datetime(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_decimal(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_dir(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_email(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_emptywidget(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_feed(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_file(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_fileupload(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_float(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_html(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_image(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_img(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_integer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_itemslist(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_label(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_linechart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_list(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_menu(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_multiplechecks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_multipleselection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_multipleselectionquery(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_password(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_piechart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_player(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_playerjs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_progress(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_querycards(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_querycombo(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_queryitem(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_querylist(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_search(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_simplelabel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_slider(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_template(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_text(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_textarea(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_timeout(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_tree(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_visvis(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$controls$control_workflow(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$organizers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$web(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$web$applications(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$web$filesbrowser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$web$middleware(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$web$middleware$apps_2_update(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyforms_web$web$middleware$middleware(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$actions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$diagram(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$helpers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$results(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$testing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$unicode(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$clipboard(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$clipboard$ironpython_clipboard(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$clipboard$no_clipboard(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$clipboard$win32_clipboard(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$console(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$console$ansi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$console$console(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$console$event(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$console$ironpython_console(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$error(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$keysyms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$keysyms$common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$keysyms$ironpython_keysyms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$keysyms$keysyms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$keysyms$winconstants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$lineeditor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$lineeditor$history(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$lineeditor$lineobj(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$lineeditor$wordmatcher(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$logger(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$modes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$modes$basemode(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$modes$emacs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$modes$notemacs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$modes$vi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$py3k_compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$release(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$rlmain(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$unicode_helper(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytz(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytz$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytz$lazy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytz$tzfile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytz$tzinfo(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_readline(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_simplejson(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_simplejson$compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_simplejson$decoder(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_simplejson$encoder(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_simplejson$errors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_simplejson$ordered_dict(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_simplejson$raw_json(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_simplejson$scanner(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_six(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tornado(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tornado$_locale_data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tornado$autoreload(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tornado$concurrent(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tornado$escape(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tornado$gen(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tornado$http1connection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tornado$httpclient(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tornado$httpserver(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tornado$httputil(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tornado$ioloop(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tornado$iostream(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tornado$locale(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tornado$locks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tornado$log(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tornado$netutil(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tornado$options(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tornado$platform(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tornado$platform$asyncio(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tornado$process(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tornado$queues(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tornado$routing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tornado$simple_httpclient(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tornado$tcpclient(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tornado$tcpserver(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tornado$template(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tornado$util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tornado$web(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tornado$websocket(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_visvis(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_visvis$backends(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_visvis$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_visvis$core$axes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_visvis$core$axises(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_visvis$core$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_visvis$core$baseFigure(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_visvis$core$baseTexture(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_visvis$core$baseWibjects(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_visvis$core$cameras(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_visvis$core$constants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_visvis$core$events(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_visvis$core$light(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_visvis$core$line(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_visvis$core$misc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_visvis$core$orientation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_visvis$core$shaders(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_visvis$core$shaders_2(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_visvis$core$shaders_3(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_visvis$core$shaders_m(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_visvis$functions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_visvis$processing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_visvis$processing$statistics(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_visvis$text(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_visvis$text$freetype(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_visvis$text$freetype$ft_enums(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_visvis$text$freetype$ft_errors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_visvis$text$freetype$ft_structs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_visvis$text$freetype$ft_types(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_visvis$text$text_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_visvis$text$text_freetype(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_visvis$text$text_prerendered(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_visvis$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_visvis$utils$pypoints(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_visvis$utils$ssdf(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_visvis$utils$ssdf$classmanager(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_visvis$utils$ssdf$ssdf_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_visvis$utils$ssdf$ssdf_bin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_visvis$utils$ssdf$ssdf_text(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_visvis$wibjects(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_visvis$wibjects$buttons(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_visvis$wibjects$colorWibjects(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_visvis$wibjects$sliders(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_visvis$wibjects$title(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_visvis$wobjects(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_visvis$wobjects$motion(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_visvis$wobjects$polygonalModeling(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_visvis$wobjects$sliceTextures(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_visvis$wobjects$textures(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);

static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] = {
    {"AnyQt", modulecode_AnyQt, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"AnyQt.QtCore", modulecode_AnyQt$QtCore, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"AnyQt.QtGui", modulecode_AnyQt$QtGui, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"AnyQt.QtOpenGL", modulecode_AnyQt$QtOpenGL, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"AnyQt.QtWebEngineWidgets", modulecode_AnyQt$QtWebEngineWidgets, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"AnyQt.QtWidgets", modulecode_AnyQt$QtWidgets, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"AnyQt._api", modulecode_AnyQt$_api, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"AnyQt._ctypes", modulecode_AnyQt$_ctypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"AnyQt._fixes", modulecode_AnyQt$_fixes, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"AnyQt.importhooks", modulecode_AnyQt$importhooks, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"AnyQt.sip", modulecode_AnyQt$sip, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"AnyQt.uic", modulecode_AnyQt$uic, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL", modulecode_OpenGL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL", modulecode_OpenGL$GL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.ARB", modulecode_OpenGL$GL$ARB, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.ARB.ES2_compatibility", modulecode_OpenGL$GL$ARB$ES2_compatibility, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.ARB.ES3_compatibility", modulecode_OpenGL$GL$ARB$ES3_compatibility, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.ARB.arrays_of_arrays", modulecode_OpenGL$GL$ARB$arrays_of_arrays, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.ARB.base_instance", modulecode_OpenGL$GL$ARB$base_instance, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.ARB.clear_buffer_object", modulecode_OpenGL$GL$ARB$clear_buffer_object, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.ARB.compressed_texture_pixel_storage", modulecode_OpenGL$GL$ARB$compressed_texture_pixel_storage, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.ARB.compute_shader", modulecode_OpenGL$GL$ARB$compute_shader, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.ARB.conservative_depth", modulecode_OpenGL$GL$ARB$conservative_depth, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.ARB.copy_image", modulecode_OpenGL$GL$ARB$copy_image, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.ARB.enhanced_layouts", modulecode_OpenGL$GL$ARB$enhanced_layouts, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.ARB.explicit_uniform_location", modulecode_OpenGL$GL$ARB$explicit_uniform_location, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.ARB.fragment_layer_viewport", modulecode_OpenGL$GL$ARB$fragment_layer_viewport, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.ARB.framebuffer_no_attachments", modulecode_OpenGL$GL$ARB$framebuffer_no_attachments, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.ARB.get_program_binary", modulecode_OpenGL$GL$ARB$get_program_binary, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.ARB.imaging", modulecode_OpenGL$GL$ARB$imaging, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.ARB.internalformat_query", modulecode_OpenGL$GL$ARB$internalformat_query, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.ARB.internalformat_query2", modulecode_OpenGL$GL$ARB$internalformat_query2, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.ARB.invalidate_subdata", modulecode_OpenGL$GL$ARB$invalidate_subdata, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.ARB.map_buffer_alignment", modulecode_OpenGL$GL$ARB$map_buffer_alignment, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.ARB.multi_draw_indirect", modulecode_OpenGL$GL$ARB$multi_draw_indirect, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.ARB.program_interface_query", modulecode_OpenGL$GL$ARB$program_interface_query, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.ARB.robust_buffer_access_behavior", modulecode_OpenGL$GL$ARB$robust_buffer_access_behavior, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.ARB.separate_shader_objects", modulecode_OpenGL$GL$ARB$separate_shader_objects, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.ARB.shader_atomic_counters", modulecode_OpenGL$GL$ARB$shader_atomic_counters, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.ARB.shader_image_load_store", modulecode_OpenGL$GL$ARB$shader_image_load_store, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.ARB.shader_image_size", modulecode_OpenGL$GL$ARB$shader_image_size, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.ARB.shader_objects", modulecode_OpenGL$GL$ARB$shader_objects, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.ARB.shader_precision", modulecode_OpenGL$GL$ARB$shader_precision, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.ARB.shader_storage_buffer_object", modulecode_OpenGL$GL$ARB$shader_storage_buffer_object, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.ARB.shading_language_420pack", modulecode_OpenGL$GL$ARB$shading_language_420pack, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.ARB.shading_language_packing", modulecode_OpenGL$GL$ARB$shading_language_packing, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.ARB.stencil_texturing", modulecode_OpenGL$GL$ARB$stencil_texturing, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.ARB.texture_buffer_object", modulecode_OpenGL$GL$ARB$texture_buffer_object, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.ARB.texture_buffer_range", modulecode_OpenGL$GL$ARB$texture_buffer_range, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.ARB.texture_query_levels", modulecode_OpenGL$GL$ARB$texture_query_levels, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.ARB.texture_storage", modulecode_OpenGL$GL$ARB$texture_storage, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.ARB.texture_storage_multisample", modulecode_OpenGL$GL$ARB$texture_storage_multisample, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.ARB.texture_view", modulecode_OpenGL$GL$ARB$texture_view, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.ARB.transform_feedback_instanced", modulecode_OpenGL$GL$ARB$transform_feedback_instanced, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.ARB.uniform_buffer_object", modulecode_OpenGL$GL$ARB$uniform_buffer_object, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.ARB.vboimplementation", modulecode_OpenGL$GL$ARB$vboimplementation, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.ARB.vertex_attrib_64bit", modulecode_OpenGL$GL$ARB$vertex_attrib_64bit, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.ARB.vertex_attrib_binding", modulecode_OpenGL$GL$ARB$vertex_attrib_binding, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.ARB.vertex_buffer_object", modulecode_OpenGL$GL$ARB$vertex_buffer_object, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.ARB.viewport_array", modulecode_OpenGL$GL$ARB$viewport_array, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.KHR", modulecode_OpenGL$GL$KHR, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.KHR.debug", modulecode_OpenGL$GL$KHR$debug, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.VERSION", modulecode_OpenGL$GL$VERSION, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.VERSION.GL_1_0", modulecode_OpenGL$GL$VERSION$GL_1_0, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.VERSION.GL_1_1", modulecode_OpenGL$GL$VERSION$GL_1_1, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.VERSION.GL_1_2", modulecode_OpenGL$GL$VERSION$GL_1_2, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.VERSION.GL_1_2_images", modulecode_OpenGL$GL$VERSION$GL_1_2_images, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.VERSION.GL_1_3", modulecode_OpenGL$GL$VERSION$GL_1_3, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.VERSION.GL_1_4", modulecode_OpenGL$GL$VERSION$GL_1_4, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.VERSION.GL_1_5", modulecode_OpenGL$GL$VERSION$GL_1_5, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.VERSION.GL_2_0", modulecode_OpenGL$GL$VERSION$GL_2_0, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.VERSION.GL_2_1", modulecode_OpenGL$GL$VERSION$GL_2_1, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.VERSION.GL_3_0", modulecode_OpenGL$GL$VERSION$GL_3_0, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.VERSION.GL_3_1", modulecode_OpenGL$GL$VERSION$GL_3_1, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.VERSION.GL_3_2", modulecode_OpenGL$GL$VERSION$GL_3_2, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.VERSION.GL_3_3", modulecode_OpenGL$GL$VERSION$GL_3_3, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.VERSION.GL_4_0", modulecode_OpenGL$GL$VERSION$GL_4_0, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.VERSION.GL_4_1", modulecode_OpenGL$GL$VERSION$GL_4_1, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.VERSION.GL_4_2", modulecode_OpenGL$GL$VERSION$GL_4_2, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.VERSION.GL_4_3", modulecode_OpenGL$GL$VERSION$GL_4_3, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.VERSION.GL_4_4", modulecode_OpenGL$GL$VERSION$GL_4_4, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.VERSION.GL_4_5", modulecode_OpenGL$GL$VERSION$GL_4_5, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.VERSION.GL_4_6", modulecode_OpenGL$GL$VERSION$GL_4_6, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.exceptional", modulecode_OpenGL$GL$exceptional, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.feedback", modulecode_OpenGL$GL$feedback, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.glget", modulecode_OpenGL$GL$glget, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.images", modulecode_OpenGL$GL$images, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.pointers", modulecode_OpenGL$GL$pointers, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.selection", modulecode_OpenGL$GL$selection, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GL.vboimplementation", modulecode_OpenGL$GL$vboimplementation, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GLU", modulecode_OpenGL$GLU, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GLU.glunurbs", modulecode_OpenGL$GLU$glunurbs, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GLU.glustruct", modulecode_OpenGL$GLU$glustruct, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GLU.projection", modulecode_OpenGL$GLU$projection, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GLU.quadrics", modulecode_OpenGL$GLU$quadrics, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.GLU.tess", modulecode_OpenGL$GLU$tess, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL._bytes", modulecode_OpenGL$_bytes, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL._configflags", modulecode_OpenGL$_configflags, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL._null", modulecode_OpenGL$_null, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL._opaque", modulecode_OpenGL$_opaque, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.acceleratesupport", modulecode_OpenGL$acceleratesupport, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.arrays", modulecode_OpenGL$arrays, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.arrays._arrayconstants", modulecode_OpenGL$arrays$_arrayconstants, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.arrays._buffers", modulecode_OpenGL$arrays$_buffers, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.arrays.arraydatatype", modulecode_OpenGL$arrays$arraydatatype, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.arrays.arrayhelpers", modulecode_OpenGL$arrays$arrayhelpers, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.arrays.buffers", modulecode_OpenGL$arrays$buffers, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.arrays.ctypesarrays", modulecode_OpenGL$arrays$ctypesarrays, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.arrays.ctypesparameters", modulecode_OpenGL$arrays$ctypesparameters, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.arrays.ctypespointers", modulecode_OpenGL$arrays$ctypespointers, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.arrays.formathandler", modulecode_OpenGL$arrays$formathandler, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.arrays.lists", modulecode_OpenGL$arrays$lists, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.arrays.nones", modulecode_OpenGL$arrays$nones, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.arrays.numbers", modulecode_OpenGL$arrays$numbers, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.arrays.numpymodule", modulecode_OpenGL$arrays$numpymodule, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.arrays.strings", modulecode_OpenGL$arrays$strings, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.arrays.vbo", modulecode_OpenGL$arrays$vbo, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.constant", modulecode_OpenGL$constant, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.constants", modulecode_OpenGL$constants, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.contextdata", modulecode_OpenGL$contextdata, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.converters", modulecode_OpenGL$converters, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.error", modulecode_OpenGL$error, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.extensions", modulecode_OpenGL$extensions, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.images", modulecode_OpenGL$images, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.latebind", modulecode_OpenGL$latebind, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.lazywrapper", modulecode_OpenGL$lazywrapper, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.logs", modulecode_OpenGL$logs, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.platform", modulecode_OpenGL$platform, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.platform.baseplatform", modulecode_OpenGL$platform$baseplatform, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.platform.ctypesloader", modulecode_OpenGL$platform$ctypesloader, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.platform.win32", modulecode_OpenGL$platform$win32, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.plugins", modulecode_OpenGL$plugins, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw", modulecode_OpenGL$raw, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL", modulecode_OpenGL$raw$GL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.ARB", modulecode_OpenGL$raw$GL$ARB, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.ARB.ES2_compatibility", modulecode_OpenGL$raw$GL$ARB$ES2_compatibility, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.ARB.ES3_compatibility", modulecode_OpenGL$raw$GL$ARB$ES3_compatibility, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.ARB.arrays_of_arrays", modulecode_OpenGL$raw$GL$ARB$arrays_of_arrays, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.ARB.base_instance", modulecode_OpenGL$raw$GL$ARB$base_instance, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.ARB.clear_buffer_object", modulecode_OpenGL$raw$GL$ARB$clear_buffer_object, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.ARB.compressed_texture_pixel_storage", modulecode_OpenGL$raw$GL$ARB$compressed_texture_pixel_storage, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.ARB.compute_shader", modulecode_OpenGL$raw$GL$ARB$compute_shader, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.ARB.conservative_depth", modulecode_OpenGL$raw$GL$ARB$conservative_depth, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.ARB.copy_image", modulecode_OpenGL$raw$GL$ARB$copy_image, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.ARB.enhanced_layouts", modulecode_OpenGL$raw$GL$ARB$enhanced_layouts, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.ARB.explicit_uniform_location", modulecode_OpenGL$raw$GL$ARB$explicit_uniform_location, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.ARB.fragment_layer_viewport", modulecode_OpenGL$raw$GL$ARB$fragment_layer_viewport, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.ARB.framebuffer_no_attachments", modulecode_OpenGL$raw$GL$ARB$framebuffer_no_attachments, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.ARB.get_program_binary", modulecode_OpenGL$raw$GL$ARB$get_program_binary, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.ARB.imaging", modulecode_OpenGL$raw$GL$ARB$imaging, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.ARB.internalformat_query", modulecode_OpenGL$raw$GL$ARB$internalformat_query, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.ARB.internalformat_query2", modulecode_OpenGL$raw$GL$ARB$internalformat_query2, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.ARB.invalidate_subdata", modulecode_OpenGL$raw$GL$ARB$invalidate_subdata, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.ARB.map_buffer_alignment", modulecode_OpenGL$raw$GL$ARB$map_buffer_alignment, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.ARB.multi_draw_indirect", modulecode_OpenGL$raw$GL$ARB$multi_draw_indirect, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.ARB.program_interface_query", modulecode_OpenGL$raw$GL$ARB$program_interface_query, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.ARB.robust_buffer_access_behavior", modulecode_OpenGL$raw$GL$ARB$robust_buffer_access_behavior, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.ARB.separate_shader_objects", modulecode_OpenGL$raw$GL$ARB$separate_shader_objects, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.ARB.shader_atomic_counters", modulecode_OpenGL$raw$GL$ARB$shader_atomic_counters, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.ARB.shader_image_load_store", modulecode_OpenGL$raw$GL$ARB$shader_image_load_store, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.ARB.shader_image_size", modulecode_OpenGL$raw$GL$ARB$shader_image_size, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.ARB.shader_objects", modulecode_OpenGL$raw$GL$ARB$shader_objects, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.ARB.shader_precision", modulecode_OpenGL$raw$GL$ARB$shader_precision, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.ARB.shader_storage_buffer_object", modulecode_OpenGL$raw$GL$ARB$shader_storage_buffer_object, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.ARB.shading_language_420pack", modulecode_OpenGL$raw$GL$ARB$shading_language_420pack, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.ARB.shading_language_packing", modulecode_OpenGL$raw$GL$ARB$shading_language_packing, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.ARB.stencil_texturing", modulecode_OpenGL$raw$GL$ARB$stencil_texturing, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.ARB.texture_buffer_object", modulecode_OpenGL$raw$GL$ARB$texture_buffer_object, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.ARB.texture_buffer_range", modulecode_OpenGL$raw$GL$ARB$texture_buffer_range, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.ARB.texture_query_levels", modulecode_OpenGL$raw$GL$ARB$texture_query_levels, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.ARB.texture_storage", modulecode_OpenGL$raw$GL$ARB$texture_storage, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.ARB.texture_storage_multisample", modulecode_OpenGL$raw$GL$ARB$texture_storage_multisample, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.ARB.texture_view", modulecode_OpenGL$raw$GL$ARB$texture_view, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.ARB.transform_feedback_instanced", modulecode_OpenGL$raw$GL$ARB$transform_feedback_instanced, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.ARB.uniform_buffer_object", modulecode_OpenGL$raw$GL$ARB$uniform_buffer_object, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.ARB.vertex_attrib_64bit", modulecode_OpenGL$raw$GL$ARB$vertex_attrib_64bit, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.ARB.vertex_attrib_binding", modulecode_OpenGL$raw$GL$ARB$vertex_attrib_binding, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.ARB.vertex_buffer_object", modulecode_OpenGL$raw$GL$ARB$vertex_buffer_object, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.ARB.viewport_array", modulecode_OpenGL$raw$GL$ARB$viewport_array, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.KHR", modulecode_OpenGL$raw$GL$KHR, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.KHR.debug", modulecode_OpenGL$raw$GL$KHR$debug, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.VERSION", modulecode_OpenGL$raw$GL$VERSION, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.VERSION.GL_1_0", modulecode_OpenGL$raw$GL$VERSION$GL_1_0, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.VERSION.GL_1_1", modulecode_OpenGL$raw$GL$VERSION$GL_1_1, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.VERSION.GL_1_2", modulecode_OpenGL$raw$GL$VERSION$GL_1_2, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.VERSION.GL_1_3", modulecode_OpenGL$raw$GL$VERSION$GL_1_3, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.VERSION.GL_1_4", modulecode_OpenGL$raw$GL$VERSION$GL_1_4, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.VERSION.GL_1_5", modulecode_OpenGL$raw$GL$VERSION$GL_1_5, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.VERSION.GL_2_0", modulecode_OpenGL$raw$GL$VERSION$GL_2_0, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.VERSION.GL_2_1", modulecode_OpenGL$raw$GL$VERSION$GL_2_1, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.VERSION.GL_3_0", modulecode_OpenGL$raw$GL$VERSION$GL_3_0, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.VERSION.GL_3_1", modulecode_OpenGL$raw$GL$VERSION$GL_3_1, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.VERSION.GL_3_2", modulecode_OpenGL$raw$GL$VERSION$GL_3_2, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.VERSION.GL_3_3", modulecode_OpenGL$raw$GL$VERSION$GL_3_3, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.VERSION.GL_4_0", modulecode_OpenGL$raw$GL$VERSION$GL_4_0, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.VERSION.GL_4_1", modulecode_OpenGL$raw$GL$VERSION$GL_4_1, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.VERSION.GL_4_2", modulecode_OpenGL$raw$GL$VERSION$GL_4_2, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.VERSION.GL_4_3", modulecode_OpenGL$raw$GL$VERSION$GL_4_3, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.VERSION.GL_4_4", modulecode_OpenGL$raw$GL$VERSION$GL_4_4, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.VERSION.GL_4_5", modulecode_OpenGL$raw$GL$VERSION$GL_4_5, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL.VERSION.GL_4_6", modulecode_OpenGL$raw$GL$VERSION$GL_4_6, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL._errors", modulecode_OpenGL$raw$GL$_errors, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL._glgets", modulecode_OpenGL$raw$GL$_glgets, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL._lookupint", modulecode_OpenGL$raw$GL$_lookupint, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GL._types", modulecode_OpenGL$raw$GL$_types, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GLU", modulecode_OpenGL$raw$GLU, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GLU.annotations", modulecode_OpenGL$raw$GLU$annotations, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.raw.GLU.constants", modulecode_OpenGL$raw$GLU$constants, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.version", modulecode_OpenGL$version, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"OpenGL.wrapper", modulecode_OpenGL$wrapper, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PIL", modulecode_PIL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PIL.BmpImagePlugin", modulecode_PIL$BmpImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PIL.GifImagePlugin", modulecode_PIL$GifImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PIL.GimpGradientFile", modulecode_PIL$GimpGradientFile, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PIL.GimpPaletteFile", modulecode_PIL$GimpPaletteFile, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PIL.Image", modulecode_PIL$Image, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PIL.ImageChops", modulecode_PIL$ImageChops, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PIL.ImageColor", modulecode_PIL$ImageColor, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PIL.ImageFile", modulecode_PIL$ImageFile, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PIL.ImageFilter", modulecode_PIL$ImageFilter, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PIL.ImageMode", modulecode_PIL$ImageMode, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PIL.ImageOps", modulecode_PIL$ImageOps, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PIL.ImagePalette", modulecode_PIL$ImagePalette, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PIL.ImageQt", modulecode_PIL$ImageQt, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PIL.ImageSequence", modulecode_PIL$ImageSequence, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PIL.ImageShow", modulecode_PIL$ImageShow, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PIL.ImageTk", modulecode_PIL$ImageTk, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PIL.JpegImagePlugin", modulecode_PIL$JpegImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PIL.JpegPresets", modulecode_PIL$JpegPresets, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PIL.MpoImagePlugin", modulecode_PIL$MpoImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PIL.PaletteFile", modulecode_PIL$PaletteFile, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PIL.PngImagePlugin", modulecode_PIL$PngImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PIL.PpmImagePlugin", modulecode_PIL$PpmImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PIL.PyAccess", modulecode_PIL$PyAccess, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PIL.TiffImagePlugin", modulecode_PIL$TiffImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PIL.TiffTags", modulecode_PIL$TiffTags, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PIL._binary", modulecode_PIL$_binary, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PIL._imaging", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PIL._imagingtk", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PIL._tkinter_finder", modulecode_PIL$_tkinter_finder, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PIL._util", modulecode_PIL$_util, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PIL._version", modulecode_PIL$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PyQt5", modulecode_PyQt5, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PyQt5-preLoad", modulecode_PyQt5$$45$preLoad, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PyQt5.Qsci", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PyQt5.QtCore", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PyQt5.QtCore-postLoad", modulecode_PyQt5$QtCore$$45$postLoad, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PyQt5.QtGui", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PyQt5.QtNetwork", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PyQt5.QtOpenGL", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PyQt5.QtPrintSupport", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PyQt5.QtSvg", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PyQt5.QtWebChannel", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PyQt5.QtWebEngineCore", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PyQt5.QtWebEngineWidgets", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PyQt5.QtWidgets", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PyQt5.sip", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PyQt5.uic", modulecode_PyQt5$uic, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PyQt5.uic.Compiler", modulecode_PyQt5$uic$Compiler, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PyQt5.uic.Compiler.compiler", modulecode_PyQt5$uic$Compiler$compiler, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PyQt5.uic.Compiler.indenter", modulecode_PyQt5$uic$Compiler$indenter, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PyQt5.uic.Compiler.misc", modulecode_PyQt5$uic$Compiler$misc, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PyQt5.uic.Compiler.proxy_metaclass", modulecode_PyQt5$uic$Compiler$proxy_metaclass, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PyQt5.uic.Compiler.qobjectcreator", modulecode_PyQt5$uic$Compiler$qobjectcreator, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PyQt5.uic.Compiler.qtproxies", modulecode_PyQt5$uic$Compiler$qtproxies, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PyQt5.uic.Loader", modulecode_PyQt5$uic$Loader, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PyQt5.uic.Loader.loader", modulecode_PyQt5$uic$Loader$loader, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PyQt5.uic.Loader.qobjectcreator", modulecode_PyQt5$uic$Loader$qobjectcreator, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PyQt5.uic.exceptions", modulecode_PyQt5$uic$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PyQt5.uic.icon_cache", modulecode_PyQt5$uic$icon_cache, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PyQt5.uic.objcreator", modulecode_PyQt5$uic$objcreator, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PyQt5.uic.port_v3", modulecode_PyQt5$uic$port_v3, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PyQt5.uic.port_v3.as_string", modulecode_PyQt5$uic$port_v3$as_string, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PyQt5.uic.port_v3.ascii_upper", modulecode_PyQt5$uic$port_v3$ascii_upper, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PyQt5.uic.port_v3.proxy_base", modulecode_PyQt5$uic$port_v3$proxy_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PyQt5.uic.port_v3.string_io", modulecode_PyQt5$uic$port_v3$string_io, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PyQt5.uic.properties", modulecode_PyQt5$uic$properties, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"PyQt5.uic.uiparser", modulecode_PyQt5$uic$uiparser, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"__main__", modulecode___main__, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"__parents_main__", modulecode___parents_main__, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"_asyncio", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"_bz2", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"_cffi_backend", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"_ctypes", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"_decimal", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"_elementtree", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"_hashlib", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"_lzma", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"_msi", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"_multiprocessing", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"_overlapped", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"_queue", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"_socket", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"_sqlite3", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"_ssl", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"_tkinter", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"_uuid", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"_zoneinfo", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"argparse", NULL, 0, 63107, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"asgiref", modulecode_asgiref, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"asgiref.current_thread_executor", modulecode_asgiref$current_thread_executor, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"asgiref.local", modulecode_asgiref$local, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"asgiref.sync", modulecode_asgiref$sync, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"bdb", NULL, 1, 25546, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"certifi", modulecode_certifi, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"certifi.core", modulecode_certifi$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"cffi", modulecode_cffi, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"cffi.api", modulecode_cffi$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"cffi.cffi_opcode", modulecode_cffi$cffi_opcode, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"cffi.commontypes", modulecode_cffi$commontypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"cffi.cparser", modulecode_cffi$cparser, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"cffi.error", modulecode_cffi$error, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"cffi.ffiplatform", modulecode_cffi$ffiplatform, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"cffi.lock", modulecode_cffi$lock, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"cffi.model", modulecode_cffi$model, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"cffi.pkgconfig", modulecode_cffi$pkgconfig, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"cffi.recompiler", modulecode_cffi$recompiler, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"cffi.vengine_cpy", modulecode_cffi$vengine_cpy, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"cffi.vengine_gen", modulecode_cffi$vengine_gen, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"cffi.verifier", modulecode_cffi$verifier, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"coloredlogs", modulecode_coloredlogs, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"coloredlogs.syslog", modulecode_coloredlogs$syslog, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"confapp", modulecode_confapp, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"confapp.settings_manager", modulecode_confapp$settings_manager, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"curses", NULL, 2, 1804, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"curses.has_key", NULL, 3, 4874, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"cv2", modulecode_cv2, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"cv2.cv2", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"cv2.data", modulecode_cv2$data, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"cv2.load_config_py3", modulecode_cv2$load_config_py3, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"cv2.version", modulecode_cv2$version, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"cycler", modulecode_cycler, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"dateutil", modulecode_dateutil, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"dateutil._common", modulecode_dateutil$_common, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"dateutil._version", modulecode_dateutil$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"dateutil.easter", modulecode_dateutil$easter, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"dateutil.parser", modulecode_dateutil$parser, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"dateutil.parser._parser", modulecode_dateutil$parser$_parser, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"dateutil.parser.isoparser", modulecode_dateutil$parser$isoparser, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"dateutil.relativedelta", modulecode_dateutil$relativedelta, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"dateutil.rrule", modulecode_dateutil$rrule, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"dateutil.tz", modulecode_dateutil$tz, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"dateutil.tz._common", modulecode_dateutil$tz$_common, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"dateutil.tz._factories", modulecode_dateutil$tz$_factories, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"dateutil.tz.tz", modulecode_dateutil$tz$tz, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"dateutil.tz.win", modulecode_dateutil$tz$win, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"dateutil.zoneinfo", modulecode_dateutil$zoneinfo, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"dbm", NULL, 4, 4195, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"dbm.dumb", NULL, 5, 7814, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"dbm.ndbm", NULL, 6, 169, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"defusedxml", modulecode_defusedxml, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"defusedxml.ElementTree", modulecode_defusedxml$ElementTree, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"defusedxml.cElementTree", modulecode_defusedxml$cElementTree, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"defusedxml.common", modulecode_defusedxml$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"defusedxml.expatbuilder", modulecode_defusedxml$expatbuilder, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"defusedxml.expatreader", modulecode_defusedxml$expatreader, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"defusedxml.minidom", modulecode_defusedxml$minidom, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"defusedxml.pulldom", modulecode_defusedxml$pulldom, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"defusedxml.sax", modulecode_defusedxml$sax, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"defusedxml.xmlrpc", modulecode_defusedxml$xmlrpc, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"dill", modulecode_dill, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"dill._dill", modulecode_dill$_dill, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"dill._objects", modulecode_dill$_objects, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"dill.detect", modulecode_dill$detect, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"dill.info", modulecode_dill$info, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"dill.objtypes", modulecode_dill$objtypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"dill.pointers", modulecode_dill$pointers, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"dill.settings", modulecode_dill$settings, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"dill.source", modulecode_dill$source, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"dill.temp", modulecode_dill$temp, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"distutils", NULL, 7, 576, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"distutils._msvccompiler", NULL, 8, 12792, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"distutils.archive_util", NULL, 9, 6472, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"distutils.ccompiler", NULL, 10, 33014, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"distutils.cmd", NULL, 11, 13859, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"distutils.command", NULL, 12, 416, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"distutils.command.build_ext", NULL, 13, 16159, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"distutils.config", NULL, 14, 3500, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"distutils.core", NULL, 15, 6567, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"distutils.debug", NULL, 16, 161, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"distutils.dep_util", NULL, 17, 2682, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"distutils.dir_util", NULL, 18, 5793, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"distutils.dist", NULL, 19, 33914, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"distutils.errors", NULL, 20, 4903, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"distutils.extension", NULL, 21, 6938, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"distutils.fancy_getopt", NULL, 22, 10543, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"distutils.file_util", NULL, 23, 5887, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"distutils.filelist", NULL, 24, 9791, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"distutils.log", NULL, 25, 2218, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"distutils.msvc9compiler", NULL, 26, 17473, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"distutils.spawn", NULL, 27, 3378, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"distutils.sysconfig", NULL, 28, 6964, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"distutils.text_file", NULL, 29, 8380, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"distutils.util", NULL, 30, 15600, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"distutils.version", NULL, 31, 7268, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"distutils.versionpredicate", NULL, 32, 5098, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django", modulecode_django, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.apps", modulecode_django$apps, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.apps.config", modulecode_django$apps$config, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.apps.registry", modulecode_django$apps$registry, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.conf", modulecode_django$conf, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.conf.global_settings", modulecode_django$conf$global_settings, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.conf.locale", modulecode_django$conf$locale, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.conf.urls", modulecode_django$conf$urls, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.contrib", modulecode_django$contrib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.contrib.staticfiles", modulecode_django$contrib$staticfiles, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.contrib.staticfiles.storage", modulecode_django$contrib$staticfiles$storage, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.contrib.staticfiles.utils", modulecode_django$contrib$staticfiles$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.core", modulecode_django$core, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.core.cache", modulecode_django$core$cache, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.core.cache.backends", modulecode_django$core$cache$backends, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.core.cache.backends.base", modulecode_django$core$cache$backends$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.core.cache.backends.filebased", modulecode_django$core$cache$backends$filebased, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.core.checks", modulecode_django$core$checks, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.core.checks.async_checks", modulecode_django$core$checks$async_checks, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.core.checks.caches", modulecode_django$core$checks$caches, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.core.checks.compatibility", modulecode_django$core$checks$compatibility, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.core.checks.compatibility.django_4_0", modulecode_django$core$checks$compatibility$django_4_0, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.core.checks.database", modulecode_django$core$checks$database, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.core.checks.files", modulecode_django$core$checks$files, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.core.checks.messages", modulecode_django$core$checks$messages, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.core.checks.model_checks", modulecode_django$core$checks$model_checks, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.core.checks.registry", modulecode_django$core$checks$registry, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.core.checks.security", modulecode_django$core$checks$security, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.core.checks.security.base", modulecode_django$core$checks$security$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.core.checks.security.csrf", modulecode_django$core$checks$security$csrf, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.core.checks.security.sessions", modulecode_django$core$checks$security$sessions, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.core.checks.templates", modulecode_django$core$checks$templates, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.core.checks.translation", modulecode_django$core$checks$translation, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.core.checks.urls", modulecode_django$core$checks$urls, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.core.exceptions", modulecode_django$core$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.core.files", modulecode_django$core$files, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.core.files.base", modulecode_django$core$files$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.core.files.images", modulecode_django$core$files$images, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.core.files.locks", modulecode_django$core$files$locks, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.core.files.move", modulecode_django$core$files$move, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.core.files.storage", modulecode_django$core$files$storage, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.core.files.temp", modulecode_django$core$files$temp, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.core.files.uploadedfile", modulecode_django$core$files$uploadedfile, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.core.files.uploadhandler", modulecode_django$core$files$uploadhandler, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.core.files.utils", modulecode_django$core$files$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.core.mail", modulecode_django$core$mail, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.core.mail.message", modulecode_django$core$mail$message, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.core.mail.utils", modulecode_django$core$mail$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.core.management", modulecode_django$core$management, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.core.management.base", modulecode_django$core$management$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.core.management.color", modulecode_django$core$management$color, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.core.paginator", modulecode_django$core$paginator, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.core.serializers", modulecode_django$core$serializers, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.core.serializers.base", modulecode_django$core$serializers$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.core.serializers.json", modulecode_django$core$serializers$json, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.core.serializers.python", modulecode_django$core$serializers$python, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.core.signals", modulecode_django$core$signals, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.core.signing", modulecode_django$core$signing, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.core.validators", modulecode_django$core$validators, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db", modulecode_django$db, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.backends", modulecode_django$db$backends, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.backends.oracle", modulecode_django$db$backends$oracle, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.backends.oracle.functions", modulecode_django$db$backends$oracle$functions, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.backends.utils", modulecode_django$db$backends$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.migrations", modulecode_django$db$migrations, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.migrations.exceptions", modulecode_django$db$migrations$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.migrations.executor", modulecode_django$db$migrations$executor, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.migrations.graph", modulecode_django$db$migrations$graph, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.migrations.loader", modulecode_django$db$migrations$loader, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.migrations.migration", modulecode_django$db$migrations$migration, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.migrations.operations", modulecode_django$db$migrations$operations, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.migrations.operations.base", modulecode_django$db$migrations$operations$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.migrations.operations.fields", modulecode_django$db$migrations$operations$fields, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.migrations.operations.models", modulecode_django$db$migrations$operations$models, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.migrations.operations.special", modulecode_django$db$migrations$operations$special, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.migrations.recorder", modulecode_django$db$migrations$recorder, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.migrations.state", modulecode_django$db$migrations$state, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.migrations.utils", modulecode_django$db$migrations$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.models", modulecode_django$db$models, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.models.aggregates", modulecode_django$db$models$aggregates, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.models.base", modulecode_django$db$models$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.models.constants", modulecode_django$db$models$constants, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.models.constraints", modulecode_django$db$models$constraints, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.models.deletion", modulecode_django$db$models$deletion, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.models.enums", modulecode_django$db$models$enums, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.models.expressions", modulecode_django$db$models$expressions, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.models.fields", modulecode_django$db$models$fields, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.models.fields.files", modulecode_django$db$models$fields$files, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.models.fields.json", modulecode_django$db$models$fields$json, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.models.fields.mixins", modulecode_django$db$models$fields$mixins, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.models.fields.proxy", modulecode_django$db$models$fields$proxy, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.models.fields.related", modulecode_django$db$models$fields$related, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.models.fields.related_descriptors", modulecode_django$db$models$fields$related_descriptors, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.models.fields.related_lookups", modulecode_django$db$models$fields$related_lookups, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.models.fields.reverse_related", modulecode_django$db$models$fields$reverse_related, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.models.functions", modulecode_django$db$models$functions, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.models.functions.comparison", modulecode_django$db$models$functions$comparison, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.models.functions.datetime", modulecode_django$db$models$functions$datetime, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.models.functions.math", modulecode_django$db$models$functions$math, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.models.functions.mixins", modulecode_django$db$models$functions$mixins, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.models.functions.text", modulecode_django$db$models$functions$text, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.models.functions.window", modulecode_django$db$models$functions$window, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.models.indexes", modulecode_django$db$models$indexes, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.models.lookups", modulecode_django$db$models$lookups, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.models.manager", modulecode_django$db$models$manager, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.models.options", modulecode_django$db$models$options, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.models.query", modulecode_django$db$models$query, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.models.query_utils", modulecode_django$db$models$query_utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.models.signals", modulecode_django$db$models$signals, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.models.sql", modulecode_django$db$models$sql, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.models.sql.constants", modulecode_django$db$models$sql$constants, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.models.sql.datastructures", modulecode_django$db$models$sql$datastructures, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.models.sql.query", modulecode_django$db$models$sql$query, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.models.sql.subqueries", modulecode_django$db$models$sql$subqueries, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.models.sql.where", modulecode_django$db$models$sql$where, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.models.utils", modulecode_django$db$models$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.transaction", modulecode_django$db$transaction, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.db.utils", modulecode_django$db$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.dispatch", modulecode_django$dispatch, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.dispatch.dispatcher", modulecode_django$dispatch$dispatcher, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.forms", modulecode_django$forms, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.forms.boundfield", modulecode_django$forms$boundfield, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.forms.fields", modulecode_django$forms$fields, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.forms.forms", modulecode_django$forms$forms, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.forms.formsets", modulecode_django$forms$formsets, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.forms.models", modulecode_django$forms$models, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.forms.renderers", modulecode_django$forms$renderers, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.forms.utils", modulecode_django$forms$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.forms.widgets", modulecode_django$forms$widgets, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.http", modulecode_django$http, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.http.cookie", modulecode_django$http$cookie, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.http.multipartparser", modulecode_django$http$multipartparser, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.http.request", modulecode_django$http$request, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.http.response", modulecode_django$http$response, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.middleware", modulecode_django$middleware, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.middleware.csrf", modulecode_django$middleware$csrf, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.template", modulecode_django$template, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.template.autoreload", modulecode_django$template$autoreload, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.template.backends", modulecode_django$template$backends, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.template.backends.base", modulecode_django$template$backends$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.template.backends.django", modulecode_django$template$backends$django, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.template.backends.jinja2", modulecode_django$template$backends$jinja2, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.template.backends.utils", modulecode_django$template$backends$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.template.base", modulecode_django$template$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.template.context", modulecode_django$template$context, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.template.engine", modulecode_django$template$engine, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.template.exceptions", modulecode_django$template$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.template.library", modulecode_django$template$library, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.template.loader", modulecode_django$template$loader, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.template.response", modulecode_django$template$response, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.template.utils", modulecode_django$template$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.templatetags", modulecode_django$templatetags, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.templatetags.static", modulecode_django$templatetags$static, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.urls", modulecode_django$urls, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.urls.base", modulecode_django$urls$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.urls.conf", modulecode_django$urls$conf, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.urls.converters", modulecode_django$urls$converters, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.urls.exceptions", modulecode_django$urls$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.urls.resolvers", modulecode_django$urls$resolvers, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.urls.utils", modulecode_django$urls$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.utils", modulecode_django$utils, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.utils._os", modulecode_django$utils$_os, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.utils.autoreload", modulecode_django$utils$autoreload, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.utils.cache", modulecode_django$utils$cache, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.utils.connection", modulecode_django$utils$connection, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.utils.crypto", modulecode_django$utils$crypto, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.utils.datastructures", modulecode_django$utils$datastructures, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.utils.dateformat", modulecode_django$utils$dateformat, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.utils.dateparse", modulecode_django$utils$dateparse, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.utils.dates", modulecode_django$utils$dates, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.utils.deconstruct", modulecode_django$utils$deconstruct, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.utils.decorators", modulecode_django$utils$decorators, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.utils.deprecation", modulecode_django$utils$deprecation, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.utils.duration", modulecode_django$utils$duration, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.utils.encoding", modulecode_django$utils$encoding, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.utils.formats", modulecode_django$utils$formats, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.utils.functional", modulecode_django$utils$functional, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.utils.hashable", modulecode_django$utils$hashable, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.utils.html", modulecode_django$utils$html, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.utils.http", modulecode_django$utils$http, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.utils.inspect", modulecode_django$utils$inspect, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.utils.ipv6", modulecode_django$utils$ipv6, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.utils.itercompat", modulecode_django$utils$itercompat, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.utils.log", modulecode_django$utils$log, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.utils.module_loading", modulecode_django$utils$module_loading, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.utils.numberformat", modulecode_django$utils$numberformat, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.utils.regex_helper", modulecode_django$utils$regex_helper, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.utils.safestring", modulecode_django$utils$safestring, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.utils.termcolors", modulecode_django$utils$termcolors, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.utils.text", modulecode_django$utils$text, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.utils.timezone", modulecode_django$utils$timezone, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.utils.topological_sort", modulecode_django$utils$topological_sort, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.utils.translation", modulecode_django$utils$translation, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.utils.translation.reloader", modulecode_django$utils$translation$reloader, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.utils.translation.template", modulecode_django$utils$translation$template, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.utils.translation.trans_null", modulecode_django$utils$translation$trans_null, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.utils.translation.trans_real", modulecode_django$utils$translation$trans_real, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.utils.tree", modulecode_django$utils$tree, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.utils.version", modulecode_django$utils$version, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.views", modulecode_django$views, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.views.decorators", modulecode_django$views$decorators, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.views.decorators.csrf", modulecode_django$views$decorators$csrf, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.views.defaults", modulecode_django$views$defaults, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.views.generic", modulecode_django$views$generic, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.views.generic.base", modulecode_django$views$generic$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.views.generic.dates", modulecode_django$views$generic$dates, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.views.generic.detail", modulecode_django$views$generic$detail, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.views.generic.edit", modulecode_django$views$generic$edit, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"django.views.generic.list", modulecode_django$views$generic$list, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"doctest", NULL, 33, 76084, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"email", NULL, 34, 1515, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"email._encoded_words", NULL, 35, 5679, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"email._header_value_parser", NULL, 36, 77786, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"email._parseaddr", NULL, 37, 12442, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"email._policybase", NULL, 38, 14746, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"email.base64mime", NULL, 39, 3204, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"email.charset", NULL, 40, 11539, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"email.contentmanager", NULL, 41, 7353, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"email.encoders", NULL, 42, 1591, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"email.errors", NULL, 43, 5666, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"email.feedparser", NULL, 44, 10542, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"email.generator", NULL, 45, 12565, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"email.header", NULL, 46, 16426, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"email.headerregistry", NULL, 47, 21869, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"email.iterators", NULL, 48, 1932, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"email.message", NULL, 49, 37772, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"email.mime", NULL, 50, 90, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"email.mime.base", NULL, 51, 1014, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"email.mime.message", NULL, 52, 1251, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"email.mime.multipart", NULL, 53, 1477, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"email.mime.nonmultipart", NULL, 54, 729, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"email.mime.text", NULL, 55, 1280, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"email.parser", NULL, 56, 5637, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"email.policy", NULL, 57, 9617, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"email.quoprimime", NULL, 58, 7587, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"email.utils", NULL, 59, 9650, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"filelock", modulecode_filelock, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"filelock._api", modulecode_filelock$_api, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"filelock._error", modulecode_filelock$_error, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"filelock._soft", modulecode_filelock$_soft, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"filelock._unix", modulecode_filelock$_unix, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"filelock._util", modulecode_filelock$_util, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"filelock._windows", modulecode_filelock$_windows, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"filelock.version", modulecode_filelock$version, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"gui", modulecode_gui, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"http", NULL, 60, 6371, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"http.client", NULL, 61, 35087, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"http.cookies", NULL, 62, 15302, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"http.server", NULL, 63, 34683, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"humanfriendly", modulecode_humanfriendly, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"humanfriendly.compat", modulecode_humanfriendly$compat, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"humanfriendly.decorators", modulecode_humanfriendly$decorators, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"humanfriendly.deprecation", modulecode_humanfriendly$deprecation, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"humanfriendly.terminal", modulecode_humanfriendly$terminal, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"humanfriendly.text", modulecode_humanfriendly$text, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"humanfriendly.usage", modulecode_humanfriendly$usage, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"jinja2", modulecode_jinja2, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"jinja2._identifier", modulecode_jinja2$_identifier, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"jinja2.async_utils", modulecode_jinja2$async_utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"jinja2.bccache", modulecode_jinja2$bccache, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"jinja2.compiler", modulecode_jinja2$compiler, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"jinja2.constants", modulecode_jinja2$constants, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"jinja2.debug", modulecode_jinja2$debug, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"jinja2.defaults", modulecode_jinja2$defaults, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"jinja2.environment", modulecode_jinja2$environment, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"jinja2.exceptions", modulecode_jinja2$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"jinja2.filters", modulecode_jinja2$filters, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"jinja2.idtracking", modulecode_jinja2$idtracking, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"jinja2.lexer", modulecode_jinja2$lexer, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"jinja2.loaders", modulecode_jinja2$loaders, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"jinja2.nodes", modulecode_jinja2$nodes, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"jinja2.optimizer", modulecode_jinja2$optimizer, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"jinja2.parser", modulecode_jinja2$parser, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"jinja2.runtime", modulecode_jinja2$runtime, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"jinja2.tests", modulecode_jinja2$tests, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"jinja2.utils", modulecode_jinja2$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"jinja2.visitor", modulecode_jinja2$visitor, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"kiwisolver", modulecode_kiwisolver, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"kiwisolver._cext", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"lib2to3", NULL, 64, 258, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"lib2to3.btm_matcher", NULL, 65, 4864, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"lib2to3.btm_utils", NULL, 66, 6133, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"lib2to3.fixer_util", NULL, 67, 12044, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"lib2to3.patcomp", NULL, 68, 5500, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"lib2to3.pgen2", NULL, 69, 123, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"lib2to3.pgen2.driver", NULL, 70, 5103, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"lib2to3.pgen2.grammar", NULL, 71, 5684, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"lib2to3.pgen2.literals", NULL, 72, 1506, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"lib2to3.pgen2.parse", NULL, 73, 6477, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"lib2to3.pgen2.pgen", NULL, 74, 9817, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"lib2to3.pgen2.token", NULL, 75, 1848, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"lib2to3.pgen2.tokenize", NULL, 76, 15082, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"lib2to3.pygram", NULL, 77, 1231, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"lib2to3.pytree", NULL, 78, 24380, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"lib2to3.refactor", NULL, 79, 20709, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"local_settings", modulecode_local_settings, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"markupsafe", modulecode_markupsafe, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"markupsafe._native", modulecode_markupsafe$_native, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"markupsafe._speedups", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib", modulecode_matplotlib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib._api", modulecode_matplotlib$_api, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib._api.deprecation", modulecode_matplotlib$_api$deprecation, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib._blocking_input", modulecode_matplotlib$_blocking_input, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib._c_internal_utils", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib._cm", modulecode_matplotlib$_cm, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib._cm_listed", modulecode_matplotlib$_cm_listed, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib._color_data", modulecode_matplotlib$_color_data, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib._constrained_layout", modulecode_matplotlib$_constrained_layout, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib._contour", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib._enums", modulecode_matplotlib$_enums, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib._image", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib._layoutgrid", modulecode_matplotlib$_layoutgrid, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib._mathtext", modulecode_matplotlib$_mathtext, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib._mathtext_data", modulecode_matplotlib$_mathtext_data, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib._path", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib._pylab_helpers", modulecode_matplotlib$_pylab_helpers, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib._qhull", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib._text_helpers", modulecode_matplotlib$_text_helpers, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib._tri", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib._version", modulecode_matplotlib$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.afm", modulecode_matplotlib$afm, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.artist", modulecode_matplotlib$artist, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.axes", modulecode_matplotlib$axes, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.axes._axes", modulecode_matplotlib$axes$_axes, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.axes._base", modulecode_matplotlib$axes$_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.axes._secondary_axes", modulecode_matplotlib$axes$_secondary_axes, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.axes._subplots", modulecode_matplotlib$axes$_subplots, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.axis", modulecode_matplotlib$axis, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.backend_bases", modulecode_matplotlib$backend_bases, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.backend_managers", modulecode_matplotlib$backend_managers, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.backend_tools", modulecode_matplotlib$backend_tools, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.backends", modulecode_matplotlib$backends, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.backends._backend_agg", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.backends._backend_tk", modulecode_matplotlib$backends$_backend_tk, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.backends._tkagg", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.backends.backend_agg", modulecode_matplotlib$backends$backend_agg, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.backends.backend_qt", modulecode_matplotlib$backends$backend_qt, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.backends.backend_qt5", modulecode_matplotlib$backends$backend_qt5, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.backends.backend_qt5agg", modulecode_matplotlib$backends$backend_qt5agg, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.backends.backend_qtagg", modulecode_matplotlib$backends$backend_qtagg, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.backends.backend_tkagg", modulecode_matplotlib$backends$backend_tkagg, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.backends.backend_webagg", modulecode_matplotlib$backends$backend_webagg, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.backends.backend_webagg_core", modulecode_matplotlib$backends$backend_webagg_core, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.backends.qt_compat", modulecode_matplotlib$backends$qt_compat, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.backends.qt_editor", modulecode_matplotlib$backends$qt_editor, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.backends.qt_editor._formlayout", modulecode_matplotlib$backends$qt_editor$_formlayout, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.backends.qt_editor.figureoptions", modulecode_matplotlib$backends$qt_editor$figureoptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.bezier", modulecode_matplotlib$bezier, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.category", modulecode_matplotlib$category, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.cbook", modulecode_matplotlib$cbook, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.cm", modulecode_matplotlib$cm, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.collections", modulecode_matplotlib$collections, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.colorbar", modulecode_matplotlib$colorbar, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.colors", modulecode_matplotlib$colors, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.container", modulecode_matplotlib$container, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.contour", modulecode_matplotlib$contour, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.dates", modulecode_matplotlib$dates, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.docstring", modulecode_matplotlib$docstring, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.dviread", modulecode_matplotlib$dviread, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.figure", modulecode_matplotlib$figure, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.font_manager", modulecode_matplotlib$font_manager, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.fontconfig_pattern", modulecode_matplotlib$fontconfig_pattern, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.ft2font", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.gridspec", modulecode_matplotlib$gridspec, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.hatch", modulecode_matplotlib$hatch, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.image", modulecode_matplotlib$image, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.legend", modulecode_matplotlib$legend, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.legend_handler", modulecode_matplotlib$legend_handler, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.lines", modulecode_matplotlib$lines, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.markers", modulecode_matplotlib$markers, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.mathtext", modulecode_matplotlib$mathtext, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.mlab", modulecode_matplotlib$mlab, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.offsetbox", modulecode_matplotlib$offsetbox, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.patches", modulecode_matplotlib$patches, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.path", modulecode_matplotlib$path, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.patheffects", modulecode_matplotlib$patheffects, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.projections", modulecode_matplotlib$projections, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.projections.geo", modulecode_matplotlib$projections$geo, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.projections.polar", modulecode_matplotlib$projections$polar, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.pyplot", modulecode_matplotlib$pyplot, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.quiver", modulecode_matplotlib$quiver, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.rcsetup", modulecode_matplotlib$rcsetup, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.scale", modulecode_matplotlib$scale, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.spines", modulecode_matplotlib$spines, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.stackplot", modulecode_matplotlib$stackplot, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.streamplot", modulecode_matplotlib$streamplot, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.style", modulecode_matplotlib$style, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.style.core", modulecode_matplotlib$style$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.table", modulecode_matplotlib$table, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.texmanager", modulecode_matplotlib$texmanager, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.text", modulecode_matplotlib$text, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.textpath", modulecode_matplotlib$textpath, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.ticker", modulecode_matplotlib$ticker, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.tight_bbox", modulecode_matplotlib$tight_bbox, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.tight_layout", modulecode_matplotlib$tight_layout, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.transforms", modulecode_matplotlib$transforms, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.tri", modulecode_matplotlib$tri, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.tri.triangulation", modulecode_matplotlib$tri$triangulation, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.tri.tricontour", modulecode_matplotlib$tri$tricontour, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.tri.trifinder", modulecode_matplotlib$tri$trifinder, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.tri.triinterpolate", modulecode_matplotlib$tri$triinterpolate, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.tri.tripcolor", modulecode_matplotlib$tri$tripcolor, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.tri.triplot", modulecode_matplotlib$tri$triplot, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.tri.trirefine", modulecode_matplotlib$tri$trirefine, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.tri.tritools", modulecode_matplotlib$tri$tritools, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.units", modulecode_matplotlib$units, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"matplotlib.widgets", modulecode_matplotlib$widgets, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"mpl_toolkits", modulecode_mpl_toolkits, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"mpl_toolkits.mplot3d", modulecode_mpl_toolkits$mplot3d, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"mpl_toolkits.mplot3d.art3d", modulecode_mpl_toolkits$mplot3d$art3d, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"mpl_toolkits.mplot3d.axes3d", modulecode_mpl_toolkits$mplot3d$axes3d, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"mpl_toolkits.mplot3d.axis3d", modulecode_mpl_toolkits$mplot3d$axis3d, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"mpl_toolkits.mplot3d.proj3d", modulecode_mpl_toolkits$mplot3d$proj3d, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"multiprocessing", NULL, 80, 624, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"multiprocessing-postLoad", modulecode_multiprocessing$$45$postLoad, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"multiprocessing-preLoad", modulecode_multiprocessing$$45$preLoad, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"multiprocessing.connection", NULL, 81, 25617, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"multiprocessing.context", NULL, 82, 12395, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"multiprocessing.dummy", NULL, 83, 3823, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"multiprocessing.dummy.connection", NULL, 84, 2532, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"multiprocessing.forkserver", NULL, 85, 8390, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"multiprocessing.heap", NULL, 86, 7632, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"multiprocessing.managers", NULL, 87, 40737, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"multiprocessing.pool", NULL, 88, 25064, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"multiprocessing.popen_spawn_win32", NULL, 89, 3438, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"multiprocessing.process", NULL, 90, 11034, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"multiprocessing.queues", NULL, 91, 10269, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"multiprocessing.reduction", NULL, 92, 8263, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"multiprocessing.resource_sharer", NULL, 93, 5265, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"multiprocessing.resource_tracker", NULL, 94, 5487, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"multiprocessing.shared_memory", NULL, 95, 14423, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"multiprocessing.sharedctypes", NULL, 96, 7064, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"multiprocessing.spawn", NULL, 97, 6703, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"multiprocessing.synchronize", NULL, 98, 11291, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"multiprocessing.util", NULL, 99, 11462, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"natsort", modulecode_natsort, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"natsort.compat", modulecode_natsort$compat, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"natsort.compat.fake_fastnumbers", modulecode_natsort$compat$fake_fastnumbers, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"natsort.compat.fastnumbers", modulecode_natsort$compat$fastnumbers, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"natsort.compat.locale", modulecode_natsort$compat$locale, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"natsort.natsort", modulecode_natsort$natsort, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"natsort.ns_enum", modulecode_natsort$ns_enum, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"natsort.unicode_numbers", modulecode_natsort$unicode_numbers, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"natsort.unicode_numeric_hex", modulecode_natsort$unicode_numeric_hex, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"natsort.utils", modulecode_natsort$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy", modulecode_numpy, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.__config__", modulecode_numpy$__config__, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy._distributor_init", modulecode_numpy$_distributor_init, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy._globals", modulecode_numpy$_globals, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy._pytesttester", modulecode_numpy$_pytesttester, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy._version", modulecode_numpy$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.compat", modulecode_numpy$compat, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.compat._inspect", modulecode_numpy$compat$_inspect, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.compat.py3k", modulecode_numpy$compat$py3k, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.core", modulecode_numpy$core, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.core._add_newdocs", modulecode_numpy$core$_add_newdocs, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.core._add_newdocs_scalars", modulecode_numpy$core$_add_newdocs_scalars, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.core._asarray", modulecode_numpy$core$_asarray, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.core._dtype", modulecode_numpy$core$_dtype, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.core._dtype_ctypes", modulecode_numpy$core$_dtype_ctypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.core._exceptions", modulecode_numpy$core$_exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.core._internal", modulecode_numpy$core$_internal, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.core._machar", modulecode_numpy$core$_machar, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.core._methods", modulecode_numpy$core$_methods, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.core._multiarray_tests", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.core._multiarray_umath", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.core._string_helpers", modulecode_numpy$core$_string_helpers, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.core._type_aliases", modulecode_numpy$core$_type_aliases, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.core._ufunc_config", modulecode_numpy$core$_ufunc_config, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.core.arrayprint", modulecode_numpy$core$arrayprint, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.core.defchararray", modulecode_numpy$core$defchararray, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.core.einsumfunc", modulecode_numpy$core$einsumfunc, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.core.fromnumeric", modulecode_numpy$core$fromnumeric, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.core.function_base", modulecode_numpy$core$function_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.core.getlimits", modulecode_numpy$core$getlimits, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.core.memmap", modulecode_numpy$core$memmap, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.core.multiarray", modulecode_numpy$core$multiarray, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.core.numeric", modulecode_numpy$core$numeric, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.core.numerictypes", modulecode_numpy$core$numerictypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.core.overrides", modulecode_numpy$core$overrides, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.core.records", modulecode_numpy$core$records, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.core.shape_base", modulecode_numpy$core$shape_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.core.umath", modulecode_numpy$core$umath, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.ctypeslib", modulecode_numpy$ctypeslib, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.fft", modulecode_numpy$fft, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.fft._pocketfft", modulecode_numpy$fft$_pocketfft, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.fft._pocketfft_internal", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.fft.helper", modulecode_numpy$fft$helper, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.lib", modulecode_numpy$lib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.lib._datasource", modulecode_numpy$lib$_datasource, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.lib._iotools", modulecode_numpy$lib$_iotools, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.lib._version", modulecode_numpy$lib$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.lib.arraypad", modulecode_numpy$lib$arraypad, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.lib.arraysetops", modulecode_numpy$lib$arraysetops, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.lib.arrayterator", modulecode_numpy$lib$arrayterator, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.lib.format", modulecode_numpy$lib$format, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.lib.function_base", modulecode_numpy$lib$function_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.lib.histograms", modulecode_numpy$lib$histograms, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.lib.index_tricks", modulecode_numpy$lib$index_tricks, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.lib.mixins", modulecode_numpy$lib$mixins, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.lib.nanfunctions", modulecode_numpy$lib$nanfunctions, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.lib.npyio", modulecode_numpy$lib$npyio, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.lib.polynomial", modulecode_numpy$lib$polynomial, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.lib.scimath", modulecode_numpy$lib$scimath, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.lib.shape_base", modulecode_numpy$lib$shape_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.lib.stride_tricks", modulecode_numpy$lib$stride_tricks, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.lib.twodim_base", modulecode_numpy$lib$twodim_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.lib.type_check", modulecode_numpy$lib$type_check, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.lib.ufunclike", modulecode_numpy$lib$ufunclike, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.lib.utils", modulecode_numpy$lib$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.linalg", modulecode_numpy$linalg, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.linalg._umath_linalg", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.linalg.linalg", modulecode_numpy$linalg$linalg, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.ma", modulecode_numpy$ma, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.ma.core", modulecode_numpy$ma$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.ma.extras", modulecode_numpy$ma$extras, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.ma.mrecords", modulecode_numpy$ma$mrecords, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.matrixlib", modulecode_numpy$matrixlib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.matrixlib.defmatrix", modulecode_numpy$matrixlib$defmatrix, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.polynomial", modulecode_numpy$polynomial, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.polynomial._polybase", modulecode_numpy$polynomial$_polybase, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.polynomial.chebyshev", modulecode_numpy$polynomial$chebyshev, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.polynomial.hermite", modulecode_numpy$polynomial$hermite, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.polynomial.hermite_e", modulecode_numpy$polynomial$hermite_e, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.polynomial.laguerre", modulecode_numpy$polynomial$laguerre, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.polynomial.legendre", modulecode_numpy$polynomial$legendre, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.polynomial.polynomial", modulecode_numpy$polynomial$polynomial, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.polynomial.polyutils", modulecode_numpy$polynomial$polyutils, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.random", modulecode_numpy$random, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.random._bounded_integers", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.random._common", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.random._generator", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.random._mt19937", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.random._pcg64", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.random._philox", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.random._pickle", modulecode_numpy$random$_pickle, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.random._sfc64", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.random.bit_generator", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.random.mtrand", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.testing", NULL, 100, 997, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.typing", modulecode_numpy$typing, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.typing._add_docstring", modulecode_numpy$typing$_add_docstring, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.typing._array_like", modulecode_numpy$typing$_array_like, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.typing._char_codes", modulecode_numpy$typing$_char_codes, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.typing._dtype_like", modulecode_numpy$typing$_dtype_like, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.typing._generic_alias", modulecode_numpy$typing$_generic_alias, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.typing._nbit", modulecode_numpy$typing$_nbit, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.typing._nested_sequence", modulecode_numpy$typing$_nested_sequence, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.typing._scalars", modulecode_numpy$typing$_scalars, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.typing._shape", modulecode_numpy$typing$_shape, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numpy.version", modulecode_numpy$version, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"optparse", NULL, 101, 47718, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"packaging", NULL, 102, 342, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"packaging.__about__", NULL, 103, 495, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"packaging._structures", NULL, 104, 2610, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"packaging.version", NULL, 105, 12830, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pdb", NULL, 106, 47572, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pkg_resources", NULL, 107, 100212, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pkg_resources._vendor", NULL, 108, 101, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pkg_resources._vendor.appdirs", NULL, 109, 20171, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pkg_resources._vendor.importlib_resources", NULL, 110, 556, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pkg_resources._vendor.importlib_resources._adapters", NULL, 111, 7273, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pkg_resources._vendor.importlib_resources._common", NULL, 112, 2563, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pkg_resources._vendor.importlib_resources._compat", NULL, 113, 3423, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pkg_resources._vendor.importlib_resources._itertools", NULL, 114, 810, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pkg_resources._vendor.importlib_resources._legacy", NULL, 115, 4146, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pkg_resources._vendor.importlib_resources.abc", NULL, 116, 5299, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pkg_resources._vendor.importlib_resources.readers", NULL, 117, 5383, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pkg_resources._vendor.jaraco", NULL, 118, 108, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pkg_resources._vendor.jaraco.context", NULL, 119, 6249, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pkg_resources._vendor.jaraco.functools", NULL, 120, 15541, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pkg_resources._vendor.jaraco.text", NULL, 121, 19577, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pkg_resources._vendor.more_itertools", NULL, 122, 183, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pkg_resources._vendor.more_itertools.more", NULL, 123, 122977, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pkg_resources._vendor.more_itertools.recipes", NULL, 124, 20253, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pkg_resources._vendor.packaging", NULL, 125, 364, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pkg_resources._vendor.packaging.__about__", NULL, 126, 517, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pkg_resources._vendor.packaging._manylinux", NULL, 127, 7227, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pkg_resources._vendor.packaging._musllinux", NULL, 128, 4539, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pkg_resources._vendor.packaging._structures", NULL, 129, 2632, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pkg_resources._vendor.packaging.markers", NULL, 130, 9225, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pkg_resources._vendor.packaging.requirements", NULL, 131, 3911, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pkg_resources._vendor.packaging.specifiers", NULL, 132, 21454, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pkg_resources._vendor.packaging.tags", NULL, 133, 12123, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pkg_resources._vendor.packaging.utils", NULL, 134, 3502, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pkg_resources._vendor.packaging.version", NULL, 135, 12852, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pkg_resources._vendor.pyparsing", NULL, 136, 198725, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pkg_resources.extern", NULL, 137, 2854, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"py_compile", NULL, 138, 7281, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pycparser", NULL, 139, 2428, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pycparser.ast_transforms", NULL, 140, 3700, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pycparser.c_ast", NULL, 141, 29457, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pycparser.c_lexer", NULL, 142, 12858, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pycparser.c_parser", NULL, 143, 62861, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pycparser.lextab", NULL, 144, 6534, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pycparser.ply", NULL, 145, 142, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pycparser.ply.lex", NULL, 146, 21319, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pycparser.ply.yacc", NULL, 147, 52576, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pycparser.plyparser", NULL, 148, 4610, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pycparser.yacctab", NULL, 149, 177025, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pydoc", NULL, 150, 84785, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyexpat", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms", modulecode_pyforms, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms.basewidget", modulecode_pyforms$basewidget, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms.controls", modulecode_pyforms$controls, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui", modulecode_pyforms_gui, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.allcontrols", modulecode_pyforms_gui$allcontrols, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.appmanager", modulecode_pyforms_gui$appmanager, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.basewidget", modulecode_pyforms_gui$basewidget, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls", modulecode_pyforms_gui$controls, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_base", modulecode_pyforms_gui$controls$control_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_boundingslider", modulecode_pyforms_gui$controls$control_boundingslider, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_button", modulecode_pyforms_gui$controls$control_button, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_checkbox", modulecode_pyforms_gui$controls$control_checkbox, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_checkboxlist", modulecode_pyforms_gui$controls$control_checkboxlist, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_codeeditor", modulecode_pyforms_gui$controls$control_codeeditor, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_combo", modulecode_pyforms_gui$controls$control_combo, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_dir", modulecode_pyforms_gui$controls$control_dir, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_dockwidget", modulecode_pyforms_gui$controls$control_dockwidget, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_emptywidget", modulecode_pyforms_gui$controls$control_emptywidget, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_event_timeline", modulecode_pyforms_gui$controls$control_event_timeline, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_event_timeline.control_eventtimeline", modulecode_pyforms_gui$controls$control_event_timeline$control_eventtimeline, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_event_timeline.events", modulecode_pyforms_gui$controls$control_event_timeline$events, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_event_timeline.events.event", modulecode_pyforms_gui$controls$control_event_timeline$events$event, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_event_timeline.events.pointer", modulecode_pyforms_gui$controls$control_event_timeline$events$pointer, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_event_timeline.events.track", modulecode_pyforms_gui$controls$control_event_timeline$events$track, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_event_timeline.events.win_event", modulecode_pyforms_gui$controls$control_event_timeline$events$win_event, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_event_timeline.events.win_track", modulecode_pyforms_gui$controls$control_event_timeline$events$win_track, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_event_timeline.graphs", modulecode_pyforms_gui$controls$control_event_timeline$graphs, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_event_timeline.graphs.graph", modulecode_pyforms_gui$controls$control_event_timeline$graphs$graph, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_event_timeline.graphs.win_events_generator", modulecode_pyforms_gui$controls$control_event_timeline$graphs$win_events_generator, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_event_timeline.graphs.win_graph_properties", modulecode_pyforms_gui$controls$control_event_timeline$graphs$win_graph_properties, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_event_timeline.graphs.win_graph_to_event", modulecode_pyforms_gui$controls$control_event_timeline$graphs$win_graph_to_event, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_event_timeline.timeline_widget", modulecode_pyforms_gui$controls$control_event_timeline$timeline_widget, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_event_timeline.utils", modulecode_pyforms_gui$controls$control_event_timeline$utils, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_event_timeline.utils.import_window", modulecode_pyforms_gui$controls$control_event_timeline$utils$import_window, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_events_graph", modulecode_pyforms_gui$controls$control_events_graph, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_events_graph.Event", modulecode_pyforms_gui$controls$control_events_graph$Event, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_events_graph.EventsWidget", modulecode_pyforms_gui$controls$control_events_graph$EventsWidget, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_events_graph.Pointer", modulecode_pyforms_gui$controls$control_events_graph$Pointer, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_events_graph.Track", modulecode_pyforms_gui$controls$control_events_graph$Track, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_events_graph.control_eventsgraph", modulecode_pyforms_gui$controls$control_events_graph$control_eventsgraph, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_file", modulecode_pyforms_gui$controls$control_file, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_filestree", modulecode_pyforms_gui$controls$control_filestree, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_image", modulecode_pyforms_gui$controls$control_image, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_label", modulecode_pyforms_gui$controls$control_label, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_list", modulecode_pyforms_gui$controls$control_list, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_matplotlib", modulecode_pyforms_gui$controls$control_matplotlib, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_mdiarea", modulecode_pyforms_gui$controls$control_mdiarea, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_number", modulecode_pyforms_gui$controls$control_number, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_opengl", modulecode_pyforms_gui$controls$control_opengl, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_password", modulecode_pyforms_gui$controls$control_password, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_player", modulecode_pyforms_gui$controls$control_player, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_player.AbstractGLWidget", modulecode_pyforms_gui$controls$control_player$AbstractGLWidget, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_player.VideoGLWidget", modulecode_pyforms_gui$controls$control_player$VideoGLWidget, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_player.VideoQt5GLWidget", modulecode_pyforms_gui$controls$control_player$VideoQt5GLWidget, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_player.control_player", modulecode_pyforms_gui$controls$control_player$control_player, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_player.multiple_videocapture", modulecode_pyforms_gui$controls$control_player$multiple_videocapture, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_progress", modulecode_pyforms_gui$controls$control_progress, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_slider", modulecode_pyforms_gui$controls$control_slider, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_tableview", modulecode_pyforms_gui$controls$control_tableview, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_text", modulecode_pyforms_gui$controls$control_text, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_textarea", modulecode_pyforms_gui$controls$control_textarea, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_toolbox", modulecode_pyforms_gui$controls$control_toolbox, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_toolbutton", modulecode_pyforms_gui$controls$control_toolbutton, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_tree", modulecode_pyforms_gui$controls$control_tree, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_treeview", modulecode_pyforms_gui$controls$control_treeview, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_visvis", modulecode_pyforms_gui$controls$control_visvis, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_visvisvolume", modulecode_pyforms_gui$controls$control_visvisvolume, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.controls.control_web", modulecode_pyforms_gui$controls$control_web, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.dialogs", modulecode_pyforms_gui$dialogs, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.dialogs.csv_parser", modulecode_pyforms_gui$dialogs$csv_parser, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.organizers", modulecode_pyforms_gui$organizers, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.settings", modulecode_pyforms_gui$settings, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.utils", modulecode_pyforms_gui$utils, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_gui.utils.tools", modulecode_pyforms_gui$utils$tools, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web", modulecode_pyforms_web, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.allcontrols", modulecode_pyforms_web$allcontrols, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.basewidget", modulecode_pyforms_web$basewidget, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls", modulecode_pyforms_web$controls, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_autocomplete", modulecode_pyforms_web$controls$control_autocomplete, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_barschart", modulecode_pyforms_web$controls$control_barschart, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_base", modulecode_pyforms_web$controls$control_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_boundingslider", modulecode_pyforms_web$controls$control_boundingslider, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_breadcrumb", modulecode_pyforms_web$controls$control_breadcrumb, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_button", modulecode_pyforms_web$controls$control_button, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_calendar", modulecode_pyforms_web$controls$control_calendar, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_checkbox", modulecode_pyforms_web$controls$control_checkbox, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_checkboxlist", modulecode_pyforms_web$controls$control_checkboxlist, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_checkboxlistquery", modulecode_pyforms_web$controls$control_checkboxlistquery, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_codemirror", modulecode_pyforms_web$controls$control_codemirror, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_combo", modulecode_pyforms_web$controls$control_combo, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_date", modulecode_pyforms_web$controls$control_date, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_datetime", modulecode_pyforms_web$controls$control_datetime, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_decimal", modulecode_pyforms_web$controls$control_decimal, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_dir", modulecode_pyforms_web$controls$control_dir, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_email", modulecode_pyforms_web$controls$control_email, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_emptywidget", modulecode_pyforms_web$controls$control_emptywidget, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_feed", modulecode_pyforms_web$controls$control_feed, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_file", modulecode_pyforms_web$controls$control_file, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_fileupload", modulecode_pyforms_web$controls$control_fileupload, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_float", modulecode_pyforms_web$controls$control_float, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_html", modulecode_pyforms_web$controls$control_html, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_image", modulecode_pyforms_web$controls$control_image, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_img", modulecode_pyforms_web$controls$control_img, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_integer", modulecode_pyforms_web$controls$control_integer, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_itemslist", modulecode_pyforms_web$controls$control_itemslist, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_label", modulecode_pyforms_web$controls$control_label, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_linechart", modulecode_pyforms_web$controls$control_linechart, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_list", modulecode_pyforms_web$controls$control_list, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_menu", modulecode_pyforms_web$controls$control_menu, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_multiplechecks", modulecode_pyforms_web$controls$control_multiplechecks, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_multipleselection", modulecode_pyforms_web$controls$control_multipleselection, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_multipleselectionquery", modulecode_pyforms_web$controls$control_multipleselectionquery, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_password", modulecode_pyforms_web$controls$control_password, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_piechart", modulecode_pyforms_web$controls$control_piechart, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_player", modulecode_pyforms_web$controls$control_player, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_playerjs", modulecode_pyforms_web$controls$control_playerjs, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_progress", modulecode_pyforms_web$controls$control_progress, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_querycards", modulecode_pyforms_web$controls$control_querycards, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_querycombo", modulecode_pyforms_web$controls$control_querycombo, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_queryitem", modulecode_pyforms_web$controls$control_queryitem, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_querylist", modulecode_pyforms_web$controls$control_querylist, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_search", modulecode_pyforms_web$controls$control_search, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_simplelabel", modulecode_pyforms_web$controls$control_simplelabel, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_slider", modulecode_pyforms_web$controls$control_slider, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_template", modulecode_pyforms_web$controls$control_template, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_text", modulecode_pyforms_web$controls$control_text, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_textarea", modulecode_pyforms_web$controls$control_textarea, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_timeout", modulecode_pyforms_web$controls$control_timeout, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_tree", modulecode_pyforms_web$controls$control_tree, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_visvis", modulecode_pyforms_web$controls$control_visvis, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.controls.control_workflow", modulecode_pyforms_web$controls$control_workflow, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.organizers", modulecode_pyforms_web$organizers, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.utils", modulecode_pyforms_web$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.web", modulecode_pyforms_web$web, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.web.applications", modulecode_pyforms_web$web$applications, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.web.filesbrowser", modulecode_pyforms_web$web$filesbrowser, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.web.middleware", modulecode_pyforms_web$web$middleware, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.web.middleware.apps_2_update", modulecode_pyforms_web$web$middleware$apps_2_update, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyforms_web.web.middleware.middleware", modulecode_pyforms_web$web$middleware$middleware, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyparsing", modulecode_pyparsing, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyparsing.actions", modulecode_pyparsing$actions, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyparsing.common", modulecode_pyparsing$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyparsing.core", modulecode_pyparsing$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyparsing.diagram", modulecode_pyparsing$diagram, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyparsing.exceptions", modulecode_pyparsing$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyparsing.helpers", modulecode_pyparsing$helpers, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyparsing.results", modulecode_pyparsing$results, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyparsing.testing", modulecode_pyparsing$testing, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyparsing.unicode", modulecode_pyparsing$unicode, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyparsing.util", modulecode_pyparsing$util, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyreadline3", modulecode_pyreadline3, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyreadline3.clipboard", modulecode_pyreadline3$clipboard, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyreadline3.clipboard.ironpython_clipboard", modulecode_pyreadline3$clipboard$ironpython_clipboard, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyreadline3.clipboard.no_clipboard", modulecode_pyreadline3$clipboard$no_clipboard, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyreadline3.clipboard.win32_clipboard", modulecode_pyreadline3$clipboard$win32_clipboard, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyreadline3.console", modulecode_pyreadline3$console, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyreadline3.console.ansi", modulecode_pyreadline3$console$ansi, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyreadline3.console.console", modulecode_pyreadline3$console$console, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyreadline3.console.event", modulecode_pyreadline3$console$event, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyreadline3.console.ironpython_console", modulecode_pyreadline3$console$ironpython_console, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyreadline3.error", modulecode_pyreadline3$error, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyreadline3.keysyms", modulecode_pyreadline3$keysyms, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyreadline3.keysyms.common", modulecode_pyreadline3$keysyms$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyreadline3.keysyms.ironpython_keysyms", modulecode_pyreadline3$keysyms$ironpython_keysyms, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyreadline3.keysyms.keysyms", modulecode_pyreadline3$keysyms$keysyms, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyreadline3.keysyms.winconstants", modulecode_pyreadline3$keysyms$winconstants, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyreadline3.lineeditor", modulecode_pyreadline3$lineeditor, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyreadline3.lineeditor.history", modulecode_pyreadline3$lineeditor$history, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyreadline3.lineeditor.lineobj", modulecode_pyreadline3$lineeditor$lineobj, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyreadline3.lineeditor.wordmatcher", modulecode_pyreadline3$lineeditor$wordmatcher, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyreadline3.logger", modulecode_pyreadline3$logger, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyreadline3.modes", modulecode_pyreadline3$modes, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyreadline3.modes.basemode", modulecode_pyreadline3$modes$basemode, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyreadline3.modes.emacs", modulecode_pyreadline3$modes$emacs, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyreadline3.modes.notemacs", modulecode_pyreadline3$modes$notemacs, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyreadline3.modes.vi", modulecode_pyreadline3$modes$vi, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyreadline3.py3k_compat", modulecode_pyreadline3$py3k_compat, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyreadline3.release", modulecode_pyreadline3$release, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyreadline3.rlmain", modulecode_pyreadline3$rlmain, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyreadline3.unicode_helper", modulecode_pyreadline3$unicode_helper, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pytz", modulecode_pytz, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pytz.exceptions", modulecode_pytz$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pytz.lazy", modulecode_pytz$lazy, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pytz.tzfile", modulecode_pytz$tzfile, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pytz.tzinfo", modulecode_pytz$tzinfo, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"readline", modulecode_readline, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"runpy", NULL, 151, 8499, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"select", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"simplejson", modulecode_simplejson, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"simplejson._speedups", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"simplejson.compat", modulecode_simplejson$compat, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"simplejson.decoder", modulecode_simplejson$decoder, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"simplejson.encoder", modulecode_simplejson$encoder, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"simplejson.errors", modulecode_simplejson$errors, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"simplejson.ordered_dict", modulecode_simplejson$ordered_dict, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"simplejson.raw_json", modulecode_simplejson$raw_json, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"simplejson.scanner", modulecode_simplejson$scanner, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"site", NULL, 152, 17344, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"six", modulecode_six, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"sqlite3", NULL, 153, 1601, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"sqlite3.dbapi2", NULL, 154, 2938, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"tkinter", NULL, 155, 169040, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"tkinter.commondialog", NULL, 156, 1312, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"tkinter.constants", NULL, 157, 1621, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"tkinter.dialog", NULL, 158, 1474, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"tkinter.filedialog", NULL, 159, 12417, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"tkinter.font", NULL, 160, 6579, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"tkinter.messagebox", NULL, 161, 2890, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"tkinter.simpledialog", NULL, 162, 10895, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"tornado", modulecode_tornado, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"tornado._locale_data", modulecode_tornado$_locale_data, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"tornado.autoreload", modulecode_tornado$autoreload, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"tornado.concurrent", modulecode_tornado$concurrent, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"tornado.escape", modulecode_tornado$escape, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"tornado.gen", modulecode_tornado$gen, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"tornado.http1connection", modulecode_tornado$http1connection, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"tornado.httpclient", modulecode_tornado$httpclient, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"tornado.httpserver", modulecode_tornado$httpserver, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"tornado.httputil", modulecode_tornado$httputil, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"tornado.ioloop", modulecode_tornado$ioloop, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"tornado.iostream", modulecode_tornado$iostream, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"tornado.locale", modulecode_tornado$locale, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"tornado.locks", modulecode_tornado$locks, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"tornado.log", modulecode_tornado$log, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"tornado.netutil", modulecode_tornado$netutil, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"tornado.options", modulecode_tornado$options, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"tornado.platform", modulecode_tornado$platform, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"tornado.platform.asyncio", modulecode_tornado$platform$asyncio, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"tornado.process", modulecode_tornado$process, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"tornado.queues", modulecode_tornado$queues, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"tornado.routing", modulecode_tornado$routing, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"tornado.simple_httpclient", modulecode_tornado$simple_httpclient, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"tornado.speedups", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"tornado.tcpclient", modulecode_tornado$tcpclient, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"tornado.tcpserver", modulecode_tornado$tcpserver, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"tornado.template", modulecode_tornado$template, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"tornado.util", modulecode_tornado$util, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"tornado.web", modulecode_tornado$web, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"tornado.websocket", modulecode_tornado$websocket, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"unicodedata", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"unittest", NULL, 163, 3350, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"unittest._log", NULL, 164, 2652, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"unittest.async_case", NULL, 165, 4635, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"unittest.case", NULL, 166, 48269, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"unittest.loader", NULL, 167, 14390, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"unittest.main", NULL, 168, 7520, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"unittest.result", NULL, 169, 7948, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"unittest.runner", NULL, 170, 6916, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"unittest.signals", NULL, 171, 2217, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"unittest.suite", NULL, 172, 10232, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"unittest.util", NULL, 173, 4504, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"visvis", modulecode_visvis, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"visvis.backends", modulecode_visvis$backends, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"visvis.core", modulecode_visvis$core, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"visvis.core.axes", modulecode_visvis$core$axes, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"visvis.core.axises", modulecode_visvis$core$axises, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"visvis.core.base", modulecode_visvis$core$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"visvis.core.baseFigure", modulecode_visvis$core$baseFigure, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"visvis.core.baseTexture", modulecode_visvis$core$baseTexture, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"visvis.core.baseWibjects", modulecode_visvis$core$baseWibjects, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"visvis.core.cameras", modulecode_visvis$core$cameras, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"visvis.core.constants", modulecode_visvis$core$constants, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"visvis.core.events", modulecode_visvis$core$events, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"visvis.core.light", modulecode_visvis$core$light, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"visvis.core.line", modulecode_visvis$core$line, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"visvis.core.misc", modulecode_visvis$core$misc, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"visvis.core.orientation", modulecode_visvis$core$orientation, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"visvis.core.shaders", modulecode_visvis$core$shaders, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"visvis.core.shaders_2", modulecode_visvis$core$shaders_2, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"visvis.core.shaders_3", modulecode_visvis$core$shaders_3, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"visvis.core.shaders_m", modulecode_visvis$core$shaders_m, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"visvis.functions", modulecode_visvis$functions, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"visvis.processing", modulecode_visvis$processing, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"visvis.processing.statistics", modulecode_visvis$processing$statistics, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"visvis.text", modulecode_visvis$text, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"visvis.text.freetype", modulecode_visvis$text$freetype, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"visvis.text.freetype.ft_enums", modulecode_visvis$text$freetype$ft_enums, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"visvis.text.freetype.ft_errors", modulecode_visvis$text$freetype$ft_errors, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"visvis.text.freetype.ft_structs", modulecode_visvis$text$freetype$ft_structs, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"visvis.text.freetype.ft_types", modulecode_visvis$text$freetype$ft_types, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"visvis.text.text_base", modulecode_visvis$text$text_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"visvis.text.text_freetype", modulecode_visvis$text$text_freetype, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"visvis.text.text_prerendered", modulecode_visvis$text$text_prerendered, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"visvis.utils", modulecode_visvis$utils, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"visvis.utils.pypoints", modulecode_visvis$utils$pypoints, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"visvis.utils.ssdf", modulecode_visvis$utils$ssdf, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"visvis.utils.ssdf.classmanager", modulecode_visvis$utils$ssdf$classmanager, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"visvis.utils.ssdf.ssdf_base", modulecode_visvis$utils$ssdf$ssdf_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"visvis.utils.ssdf.ssdf_bin", modulecode_visvis$utils$ssdf$ssdf_bin, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"visvis.utils.ssdf.ssdf_text", modulecode_visvis$utils$ssdf$ssdf_text, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"visvis.wibjects", modulecode_visvis$wibjects, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"visvis.wibjects.buttons", modulecode_visvis$wibjects$buttons, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"visvis.wibjects.colorWibjects", modulecode_visvis$wibjects$colorWibjects, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"visvis.wibjects.sliders", modulecode_visvis$wibjects$sliders, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"visvis.wibjects.title", modulecode_visvis$wibjects$title, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"visvis.wobjects", modulecode_visvis$wobjects, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"visvis.wobjects.motion", modulecode_visvis$wobjects$motion, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"visvis.wobjects.polygonalModeling", modulecode_visvis$wobjects$polygonalModeling, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"visvis.wobjects.sliceTextures", modulecode_visvis$wobjects$sliceTextures, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"visvis.wobjects.textures", modulecode_visvis$wobjects$textures, 0, 0, NUITKA_TRANSLATED_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"__future__", NULL, 174, 4095, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"_aix_support", NULL, 175, 2843, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"_bootsubprocess", NULL, 176, 2258, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"_collections_abc", NULL, 177, 32801, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"_compat_pickle", NULL, 178, 5836, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"_compression", NULL, 179, 4476, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"_markupbase", NULL, 180, 7536, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"_osx_support", NULL, 181, 11499, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"_py_abc", NULL, 182, 4649, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"_pyio", NULL, 183, 73626, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"_sitebuiltins", NULL, 184, 3511, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"_strptime", NULL, 185, 15915, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"_threading_local", NULL, 186, 6503, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"_weakrefset", NULL, 187, 7572, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"abc", NULL, 188, 6715, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"aifc", NULL, 189, 24657, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"ast", NULL, 190, 55580, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"asynchat", NULL, 191, 6989, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"asyncio", NULL, 192, 699, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"asyncio.base_events", NULL, 193, 51751, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"asyncio.base_futures", NULL, 194, 1875, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"asyncio.base_subprocess", NULL, 195, 9350, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"asyncio.base_tasks", NULL, 196, 1945, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"asyncio.constants", NULL, 197, 550, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"asyncio.coroutines", NULL, 198, 6587, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"asyncio.events", NULL, 199, 28387, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"asyncio.exceptions", NULL, 200, 2432, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"asyncio.format_helpers", NULL, 201, 2303, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"asyncio.futures", NULL, 202, 11770, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"asyncio.locks", NULL, 203, 13855, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"asyncio.log", NULL, 204, 193, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"asyncio.mixins", NULL, 205, 1041, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"asyncio.proactor_events", NULL, 206, 24586, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"asyncio.protocols", NULL, 207, 8262, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"asyncio.queues", NULL, 208, 8264, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"asyncio.runners", NULL, 209, 2056, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"asyncio.selector_events", NULL, 210, 29423, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"asyncio.sslproto", NULL, 211, 21918, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"asyncio.staggered", NULL, 212, 4147, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"asyncio.streams", NULL, 213, 20309, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"asyncio.subprocess", NULL, 214, 7026, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"asyncio.tasks", NULL, 215, 23600, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"asyncio.threads", NULL, 216, 949, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"asyncio.transports", NULL, 217, 12296, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"asyncio.trsock", NULL, 218, 7806, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"asyncio.windows_events", NULL, 219, 24023, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"asyncio.windows_utils", NULL, 220, 4460, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"asyncore", NULL, 221, 15974, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"base64", NULL, 222, 17126, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"binhex", NULL, 223, 12834, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"bisect", NULL, 224, 2552, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"bz2", NULL, 225, 10834, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"calendar", NULL, 226, 26267, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"cgi", NULL, 227, 26687, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"cgitb", NULL, 228, 9962, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"chunk", NULL, 229, 4824, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"cmd", NULL, 230, 12671, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"code", NULL, 231, 9921, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"codecs", NULL, 232, 33143, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"codeop", NULL, 233, 5475, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"collections", NULL, 234, 48410, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"collections.abc", NULL, 235, 32800, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"colorsys", NULL, 236, 3229, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"concurrent", NULL, 237, 90, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"concurrent.futures", NULL, 238, 1062, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"concurrent.futures._base", NULL, 239, 22011, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"concurrent.futures.process", NULL, 240, 21064, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"concurrent.futures.thread", NULL, 241, 5929, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"configparser", NULL, 242, 45429, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"contextlib", NULL, 243, 20863, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"contextvars", NULL, 244, 210, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"copy", NULL, 245, 6946, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"copyreg", NULL, 246, 4651, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"csv", NULL, 247, 11768, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"ctypes", NULL, 248, 15837, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"ctypes._aix", NULL, 249, 9834, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"ctypes._endian", NULL, 250, 1865, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"ctypes.macholib", NULL, 251, 257, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"ctypes.macholib.dyld", NULL, 252, 4586, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"ctypes.macholib.dylib", NULL, 253, 1873, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"ctypes.macholib.framework", NULL, 254, 2153, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"ctypes.util", NULL, 255, 8276, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"ctypes.wintypes", NULL, 256, 4822, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"dataclasses", NULL, 257, 26503, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"datetime", NULL, 258, 56499, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"decimal", NULL, 259, 157715, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"difflib", NULL, 260, 58892, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"dis", NULL, 261, 15620, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings", NULL, 262, 3862, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.aliases", NULL, 263, 10885, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.ascii", NULL, 264, 1776, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.base64_codec", NULL, 265, 2211, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.big5", NULL, 266, 1330, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.big5hkscs", NULL, 267, 1340, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.bz2_codec", NULL, 268, 3050, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.charmap", NULL, 269, 2683, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.cp037", NULL, 270, 2314, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.cp1006", NULL, 271, 2390, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.cp1026", NULL, 272, 2318, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.cp1125", NULL, 273, 9255, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.cp1140", NULL, 274, 2304, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.cp1250", NULL, 275, 2341, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.cp1251", NULL, 276, 2338, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.cp1252", NULL, 277, 2341, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.cp1253", NULL, 278, 2354, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.cp1254", NULL, 279, 2343, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.cp1255", NULL, 280, 2362, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.cp1256", NULL, 281, 2340, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.cp1257", NULL, 282, 2348, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.cp1258", NULL, 283, 2346, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.cp273", NULL, 284, 2300, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.cp424", NULL, 285, 2344, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.cp437", NULL, 286, 8888, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.cp500", NULL, 287, 2314, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.cp720", NULL, 288, 2411, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.cp737", NULL, 289, 9290, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.cp775", NULL, 290, 8928, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.cp850", NULL, 291, 8469, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.cp852", NULL, 292, 8944, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.cp855", NULL, 293, 9257, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.cp856", NULL, 294, 2376, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.cp857", NULL, 295, 8368, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.cp858", NULL, 296, 8439, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.cp860", NULL, 297, 8859, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.cp861", NULL, 298, 8884, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.cp862", NULL, 299, 9117, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.cp863", NULL, 300, 8880, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.cp864", NULL, 301, 9027, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.cp865", NULL, 302, 8884, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.cp866", NULL, 303, 9297, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.cp869", NULL, 304, 8932, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.cp874", NULL, 305, 2442, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.cp875", NULL, 306, 2311, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.cp932", NULL, 307, 1332, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.cp949", NULL, 308, 1332, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.cp950", NULL, 309, 1332, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.euc_jis_2004", NULL, 310, 1346, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.euc_jisx0213", NULL, 311, 1346, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.euc_jp", NULL, 312, 1334, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.euc_kr", NULL, 313, 1334, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.gb18030", NULL, 314, 1336, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.gb2312", NULL, 315, 1334, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.gbk", NULL, 316, 1328, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.hex_codec", NULL, 317, 2198, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.hp_roman8", NULL, 318, 2515, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.hz", NULL, 319, 1326, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.idna", NULL, 320, 5573, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.iso2022_jp", NULL, 321, 1347, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.iso2022_jp_1", NULL, 322, 1351, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.iso2022_jp_2", NULL, 323, 1351, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.iso2022_jp_2004", NULL, 324, 1357, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.iso2022_jp_3", NULL, 325, 1351, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.iso2022_jp_ext", NULL, 326, 1355, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.iso2022_kr", NULL, 327, 1347, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.iso8859_1", NULL, 328, 2313, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.iso8859_10", NULL, 329, 2318, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.iso8859_11", NULL, 330, 2412, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.iso8859_13", NULL, 331, 2321, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.iso8859_14", NULL, 332, 2339, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.iso8859_15", NULL, 333, 2318, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.iso8859_16", NULL, 334, 2320, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.iso8859_2", NULL, 335, 2313, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.iso8859_3", NULL, 336, 2320, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.iso8859_4", NULL, 337, 2313, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.iso8859_5", NULL, 338, 2314, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.iso8859_6", NULL, 339, 2358, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.iso8859_7", NULL, 340, 2321, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.iso8859_8", NULL, 341, 2352, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.iso8859_9", NULL, 342, 2313, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.johab", NULL, 343, 1332, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.koi8_r", NULL, 344, 2365, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.koi8_t", NULL, 345, 2276, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.koi8_u", NULL, 346, 2351, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.kz1048", NULL, 347, 2328, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.latin_1", NULL, 348, 1788, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.mac_arabic", NULL, 349, 8774, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.mac_croatian", NULL, 350, 2360, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.mac_cyrillic", NULL, 351, 2350, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.mac_farsi", NULL, 352, 2294, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.mac_greek", NULL, 353, 2334, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.mac_iceland", NULL, 354, 2353, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.mac_latin2", NULL, 355, 2494, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.mac_roman", NULL, 356, 2351, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.mac_romanian", NULL, 357, 2361, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.mac_turkish", NULL, 358, 2354, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.mbcs", NULL, 359, 1646, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.oem", NULL, 360, 1459, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.palmos", NULL, 361, 2341, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.ptcp154", NULL, 362, 2435, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.punycode", NULL, 363, 6269, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.quopri_codec", NULL, 364, 2281, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.raw_unicode_escape", NULL, 365, 1922, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.rot_13", NULL, 366, 2955, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.shift_jis", NULL, 367, 1340, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.shift_jis_2004", NULL, 368, 1350, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.shift_jisx0213", NULL, 369, 1350, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.tis_620", NULL, 370, 2403, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.undefined", NULL, 371, 1979, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.unicode_escape", NULL, 372, 1902, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.utf_16", NULL, 373, 4808, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.utf_16_be", NULL, 374, 1581, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.utf_16_le", NULL, 375, 1581, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.utf_32", NULL, 376, 4701, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.utf_32_be", NULL, 377, 1474, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.utf_32_le", NULL, 378, 1474, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.utf_7", NULL, 379, 1502, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.utf_8", NULL, 380, 1561, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.utf_8_sig", NULL, 381, 4358, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.uu_codec", NULL, 382, 3150, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"encodings.zlib_codec", NULL, 383, 2811, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"enum", NULL, 384, 26045, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"filecmp", NULL, 385, 8713, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"fileinput", NULL, 386, 14019, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"fnmatch", NULL, 387, 3990, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"fractions", NULL, 388, 18564, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"ftplib", NULL, 389, 28943, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"functools", NULL, 390, 28313, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"genericpath", NULL, 391, 3871, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"getopt", NULL, 392, 6303, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"getpass", NULL, 393, 4174, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"gettext", NULL, 394, 18074, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"glob", NULL, 395, 5816, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"graphlib", NULL, 396, 7586, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"gzip", NULL, 397, 18510, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"hashlib", NULL, 398, 6809, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"heapq", NULL, 399, 13829, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"hmac", NULL, 400, 6937, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"html", NULL, 401, 3278, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"html.entities", NULL, 402, 144394, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"html.parser", NULL, 403, 10734, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"imaplib", NULL, 404, 42278, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"imghdr", NULL, 405, 3877, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"imp", NULL, 406, 9750, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"importlib", NULL, 407, 3760, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"importlib._abc", NULL, 408, 1935, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"importlib._adapters", NULL, 409, 3667, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"importlib._bootstrap", NULL, 410, 30094, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"importlib._bootstrap_external", NULL, 411, 44281, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"importlib._common", NULL, 412, 2904, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"importlib.abc", NULL, 413, 15855, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"importlib.machinery", NULL, 414, 908, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"importlib.metadata", NULL, 415, 36734, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"importlib.metadata._adapters", NULL, 416, 2308, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"importlib.metadata._collections", NULL, 417, 1483, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"importlib.metadata._functools", NULL, 418, 2602, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"importlib.metadata._itertools", NULL, 419, 535, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"importlib.metadata._meta", NULL, 420, 2228, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"importlib.metadata._text", NULL, 421, 3024, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"importlib.readers", NULL, 422, 5146, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"importlib.resources", NULL, 423, 5333, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"importlib.util", NULL, 424, 9293, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"inspect", NULL, 425, 84689, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"io", NULL, 426, 3627, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"ipaddress", NULL, 427, 61427, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"json", NULL, 428, 12274, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"json.decoder", NULL, 429, 9729, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"json.encoder", NULL, 430, 11082, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"json.scanner", NULL, 431, 1880, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"json.tool", NULL, 432, 2780, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"keyword", NULL, 433, 891, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"linecache", NULL, 434, 4067, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"locale", NULL, 435, 46129, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"logging", NULL, 436, 66841, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"logging.config", NULL, 437, 23139, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"logging.handlers", NULL, 438, 44507, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"lzma", NULL, 439, 12064, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"mailbox", NULL, 440, 60053, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"mailcap", NULL, 441, 6554, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"mimetypes", NULL, 442, 17583, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"modulefinder", NULL, 443, 16134, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"msilib", NULL, 444, 15785, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"msilib.schema", NULL, 445, 49767, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"msilib.sequence", NULL, 446, 2348, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"msilib.text", NULL, 447, 7959, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"netrc", NULL, 448, 3899, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"ntpath", NULL, 449, 14702, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"nturl2path", NULL, 450, 1711, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"numbers", NULL, 451, 11817, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"opcode", NULL, 452, 5411, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"operator", NULL, 453, 13472, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"os", NULL, 454, 31520, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pathlib", NULL, 455, 41991, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pickle", NULL, 456, 46836, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pickletools", NULL, 457, 67728, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pipes", NULL, 458, 7733, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pkgutil", NULL, 459, 18325, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"platform", NULL, 460, 27341, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"poplib", NULL, 461, 13541, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"posixpath", NULL, 462, 10479, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pprint", NULL, 463, 17843, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pstats", NULL, 464, 23585, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"pyclbr", NULL, 465, 9739, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"queue", NULL, 466, 10743, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"quopri", NULL, 467, 5758, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"random", NULL, 468, 22712, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"re", NULL, 469, 14191, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"reprlib", NULL, 470, 5214, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"rlcompleter", NULL, 471, 5920, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"sched", NULL, 472, 6079, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"secrets", NULL, 473, 2139, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"selectors", NULL, 474, 17069, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"shelve", NULL, 475, 9456, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"shlex", NULL, 476, 7754, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"shutil", NULL, 477, 37801, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"signal", NULL, 478, 2899, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"smtpd", NULL, 479, 26111, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"sndhdr", NULL, 480, 6926, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"socket", NULL, 481, 28915, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"socketserver", NULL, 482, 25311, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"sre_compile", NULL, 483, 15057, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"sre_constants", NULL, 484, 6302, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"sre_parse", NULL, 485, 21540, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"ssl", NULL, 486, 44778, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"stat", NULL, 487, 4237, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"statistics", NULL, 488, 36728, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"string", NULL, 489, 7066, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"stringprep", NULL, 490, 17039, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"struct", NULL, 491, 271, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"subprocess", NULL, 492, 44404, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"symtable", NULL, 493, 12778, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"sysconfig", NULL, 494, 17437, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"tarfile", NULL, 495, 63572, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"tempfile", NULL, 496, 23445, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"textwrap", NULL, 497, 13784, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"threading", NULL, 498, 44908, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"timeit", NULL, 499, 11733, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"token", NULL, 500, 2702, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"tokenize", NULL, 501, 17172, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"trace", NULL, 502, 19805, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"traceback", NULL, 503, 21688, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"tracemalloc", NULL, 504, 17489, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"types", NULL, 505, 9497, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"typing", NULL, 506, 85234, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"urllib", NULL, 507, 86, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"urllib.error", NULL, 508, 2785, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"urllib.parse", NULL, 509, 33768, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"urllib.request", NULL, 510, 71191, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"urllib.response", NULL, 511, 3431, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"urllib.robotparser", NULL, 512, 7296, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"uu", NULL, 513, 3652, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"uuid", NULL, 514, 22431, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"warnings", NULL, 515, 13622, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"wave", NULL, 516, 17558, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"weakref", NULL, 517, 20307, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"webbrowser", NULL, 518, 16964, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"wsgiref", NULL, 519, 682, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"wsgiref.handlers", NULL, 520, 16364, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"wsgiref.headers", NULL, 521, 7679, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"wsgiref.simple_server", NULL, 522, 5270, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"wsgiref.util", NULL, 523, 5371, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"wsgiref.validate", NULL, 524, 14558, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"xdrlib", NULL, 525, 7844, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"xml", NULL, 526, 648, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"xml.dom", NULL, 527, 5232, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"xml.dom.NodeFilter", NULL, 528, 932, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"xml.dom.domreg", NULL, 529, 2823, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"xml.dom.expatbuilder", NULL, 530, 27279, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"xml.dom.minicompat", NULL, 531, 2654, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"xml.dom.minidom", NULL, 532, 55292, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"xml.dom.pulldom", NULL, 533, 10518, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"xml.dom.xmlbuilder", NULL, 534, 12265, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"xml.etree", NULL, 535, 89, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"xml.etree.ElementInclude", NULL, 536, 2399, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"xml.etree.ElementPath", NULL, 537, 9002, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"xml.etree.ElementTree", NULL, 538, 55885, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"xml.etree.cElementTree", NULL, 539, 140, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"xml.parsers", NULL, 540, 263, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"xml.parsers.expat", NULL, 541, 301, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"xml.sax", NULL, 542, 3160, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"xml.sax._exceptions", NULL, 543, 5338, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"xml.sax.expatreader", NULL, 544, 12465, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"xml.sax.handler", NULL, 545, 14508, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"xml.sax.saxutils", NULL, 546, 12610, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"xml.sax.xmlreader", NULL, 547, 16351, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"xmlrpc", NULL, 548, 86, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"xmlrpc.client", NULL, 549, 34354, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"xmlrpc.server", NULL, 550, 29382, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"zipapp", NULL, 551, 5977, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"zipfile", NULL, 552, 60485, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"zoneinfo", NULL, 553, 765, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"zoneinfo._common", NULL, 554, 3077, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"zoneinfo._tzpath", NULL, 555, 4038, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {"zoneinfo._zoneinfo", NULL, 556, 15406, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if PYTHON_VERSION >= 0x370 && !defined(_NUITKA_STANDALONE)
, NULL
#endif
},
    {NULL, NULL, 0, 0, 0}
};

static void _loadBytesCodesBlob(void) {
    static bool init_done = false;

    if (init_done == false) {
        loadConstantsBlob((PyObject **)bytecode_data, ".bytecode");

        init_done = true;
    }
}


void setupMetaPathBasedLoader(void) {
    static bool init_done = false;
    if (init_done == false) {
        _loadBytesCodesBlob();
        registerMetaPathBasedUnfreezer(meta_path_loader_entries, bytecode_data);

        init_done = true;
    }
}

// This provides the frozen (compiled bytecode) files that are included if
// any.

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    int index;
    int size;
};

static struct frozen_desc _frozen_modules[] = {
    {"_collections_abc", 177, 32801},
    {"abc", 188, 6715},
    {"ast", 190, 55580},
    {"codecs", 232, 33143},
    {"collections", 234, -48410},
    {"collections.abc", 235, 32800},
    {"contextlib", 243, 20863},
    {"copyreg", 246, 4651},
    {"dis", 261, 15620},
    {"encodings", 262, -3862},
    {"encodings.aliases", 263, 10885},
    {"encodings.ascii", 264, 1776},
    {"encodings.big5", 266, 1330},
    {"encodings.big5hkscs", 267, 1340},
    {"encodings.charmap", 269, 2683},
    {"encodings.cp037", 270, 2314},
    {"encodings.cp1006", 271, 2390},
    {"encodings.cp1026", 272, 2318},
    {"encodings.cp1125", 273, 9255},
    {"encodings.cp1140", 274, 2304},
    {"encodings.cp1250", 275, 2341},
    {"encodings.cp1251", 276, 2338},
    {"encodings.cp1252", 277, 2341},
    {"encodings.cp1253", 278, 2354},
    {"encodings.cp1254", 279, 2343},
    {"encodings.cp1255", 280, 2362},
    {"encodings.cp1256", 281, 2340},
    {"encodings.cp1257", 282, 2348},
    {"encodings.cp1258", 283, 2346},
    {"encodings.cp273", 284, 2300},
    {"encodings.cp424", 285, 2344},
    {"encodings.cp437", 286, 8888},
    {"encodings.cp500", 287, 2314},
    {"encodings.cp720", 288, 2411},
    {"encodings.cp737", 289, 9290},
    {"encodings.cp775", 290, 8928},
    {"encodings.cp850", 291, 8469},
    {"encodings.cp852", 292, 8944},
    {"encodings.cp855", 293, 9257},
    {"encodings.cp856", 294, 2376},
    {"encodings.cp857", 295, 8368},
    {"encodings.cp858", 296, 8439},
    {"encodings.cp860", 297, 8859},
    {"encodings.cp861", 298, 8884},
    {"encodings.cp862", 299, 9117},
    {"encodings.cp863", 300, 8880},
    {"encodings.cp864", 301, 9027},
    {"encodings.cp865", 302, 8884},
    {"encodings.cp866", 303, 9297},
    {"encodings.cp869", 304, 8932},
    {"encodings.cp874", 305, 2442},
    {"encodings.cp875", 306, 2311},
    {"encodings.cp932", 307, 1332},
    {"encodings.cp949", 308, 1332},
    {"encodings.cp950", 309, 1332},
    {"encodings.euc_jis_2004", 310, 1346},
    {"encodings.euc_jisx0213", 311, 1346},
    {"encodings.euc_jp", 312, 1334},
    {"encodings.euc_kr", 313, 1334},
    {"encodings.gb18030", 314, 1336},
    {"encodings.gb2312", 315, 1334},
    {"encodings.gbk", 316, 1328},
    {"encodings.hp_roman8", 318, 2515},
    {"encodings.hz", 319, 1326},
    {"encodings.iso2022_jp", 321, 1347},
    {"encodings.iso2022_jp_1", 322, 1351},
    {"encodings.iso2022_jp_2", 323, 1351},
    {"encodings.iso2022_jp_2004", 324, 1357},
    {"encodings.iso2022_jp_3", 325, 1351},
    {"encodings.iso2022_jp_ext", 326, 1355},
    {"encodings.iso2022_kr", 327, 1347},
    {"encodings.iso8859_1", 328, 2313},
    {"encodings.iso8859_10", 329, 2318},
    {"encodings.iso8859_11", 330, 2412},
    {"encodings.iso8859_13", 331, 2321},
    {"encodings.iso8859_14", 332, 2339},
    {"encodings.iso8859_15", 333, 2318},
    {"encodings.iso8859_16", 334, 2320},
    {"encodings.iso8859_2", 335, 2313},
    {"encodings.iso8859_3", 336, 2320},
    {"encodings.iso8859_4", 337, 2313},
    {"encodings.iso8859_5", 338, 2314},
    {"encodings.iso8859_6", 339, 2358},
    {"encodings.iso8859_7", 340, 2321},
    {"encodings.iso8859_8", 341, 2352},
    {"encodings.iso8859_9", 342, 2313},
    {"encodings.johab", 343, 1332},
    {"encodings.koi8_r", 344, 2365},
    {"encodings.koi8_t", 345, 2276},
    {"encodings.koi8_u", 346, 2351},
    {"encodings.kz1048", 347, 2328},
    {"encodings.latin_1", 348, 1788},
    {"encodings.mac_arabic", 349, 8774},
    {"encodings.mac_croatian", 350, 2360},
    {"encodings.mac_cyrillic", 351, 2350},
    {"encodings.mac_farsi", 352, 2294},
    {"encodings.mac_greek", 353, 2334},
    {"encodings.mac_iceland", 354, 2353},
    {"encodings.mac_latin2", 355, 2494},
    {"encodings.mac_roman", 356, 2351},
    {"encodings.mac_romanian", 357, 2361},
    {"encodings.mac_turkish", 358, 2354},
    {"encodings.mbcs", 359, 1646},
    {"encodings.oem", 360, 1459},
    {"encodings.palmos", 361, 2341},
    {"encodings.ptcp154", 362, 2435},
    {"encodings.punycode", 363, 6269},
    {"encodings.quopri_codec", 364, 2281},
    {"encodings.raw_unicode_escape", 365, 1922},
    {"encodings.shift_jis", 367, 1340},
    {"encodings.shift_jis_2004", 368, 1350},
    {"encodings.shift_jisx0213", 369, 1350},
    {"encodings.tis_620", 370, 2403},
    {"encodings.undefined", 371, 1979},
    {"encodings.unicode_escape", 372, 1902},
    {"encodings.utf_16", 373, 4808},
    {"encodings.utf_16_be", 374, 1581},
    {"encodings.utf_16_le", 375, 1581},
    {"encodings.utf_32", 376, 4701},
    {"encodings.utf_32_be", 377, 1474},
    {"encodings.utf_32_le", 378, 1474},
    {"encodings.utf_7", 379, 1502},
    {"encodings.utf_8", 380, 1561},
    {"encodings.utf_8_sig", 381, 4358},
    {"encodings.uu_codec", 382, 3150},
    {"encodings.zlib_codec", 383, 2811},
    {"enum", 384, 26045},
    {"functools", 390, 28313},
    {"genericpath", 391, 3871},
    {"importlib", 407, -3760},
    {"importlib._bootstrap", 410, 30094},
    {"importlib._bootstrap_external", 411, 44281},
    {"importlib.machinery", 414, 908},
    {"inspect", 425, 84689},
    {"io", 426, 3627},
    {"keyword", 433, 891},
    {"linecache", 434, 4067},
    {"locale", 435, 46129},
    {"ntpath", 449, 14702},
    {"opcode", 452, 5411},
    {"operator", 453, 13472},
    {"os", 454, 31520},
    {"quopri", 467, 5758},
    {"re", 469, 14191},
    {"reprlib", 470, 5214},
    {"sre_compile", 483, 15057},
    {"sre_constants", 484, 6302},
    {"sre_parse", 485, 21540},
    {"stat", 487, 4237},
    {"token", 500, 2702},
    {"tokenize", 501, 17172},
    {"types", 505, 9497},
    {"warnings", 515, 13622},
    {NULL, 0, 0}
};


void copyFrozenModulesTo(struct _frozen *destination) {
    _loadBytesCodesBlob();

    struct frozen_desc *current = _frozen_modules;

    for (;;) {
        destination->name = (char *)current->name;
        destination->code = bytecode_data[current->index];
        destination->size = current->size;

        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}

