//
//  Generated file. Do not edit.
//

// clang-format off

#include "generated_plugin_registrant.h"

#include <file_picker/file_picker_linux.h>

void fl_register_plugins(FlPluginRegistry* registry) {
  g_autoptr(FlPluginRegistrar) file_picker_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "FilePickerLinux");
  file_picker_linux_register_with_registrar(file_picker_registrar);
}
