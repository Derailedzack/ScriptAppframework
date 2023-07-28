#include "Script_AppFramework.h"
#include <stdlib.h>
Appframework_Lib* CreateAppFrameworkLib(const char* name, void* init_func, void* registerapi_func, void* scripterror_func) {
	Appframework_Lib* appframeworklib = malloc(sizeof(Appframework_Lib));
	if (appframeworklib != NULL) {
		appframeworklib->name = name;
		appframeworklib->Init_Func = init_func;
		appframeworklib->RegisterApi_Func = registerapi_func;
		appframeworklib->ScriptError_Func = scripterror_func;
		return appframeworklib;
	}
	return NULL;
}
void DestroyAppFrameworkLib(Appframework_Lib* appframeworklib) {
	free(appframeworklib);
}