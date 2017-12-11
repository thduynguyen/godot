#include "project_settings.h"
#include "platform/iphone/globals/global_defaults.h"
#include "platform/android/globals/global_defaults.h"
void ProjectSettings::register_global_defaults() {
	register_iphone_global_defaults();
	register_android_global_defaults();

}
