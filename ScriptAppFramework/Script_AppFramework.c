#include"Script_AppFramework.h"
#include<stdlib.h>
Appframework_Lib* CreateAppFrameworkLib(const char* name, void* Init_Func, void* RegisterApi_Func, void* ScriptError_Func) {
	Appframework_Lib* appframeworklib = malloc(sizeof(Appframework_Lib));
	if (appframeworklib != NULL) {
		appframeworklib->name = name;
		appframeworklib->Init_Func = Init_Func;
		appframeworklib->RegisterApi_Func = RegisterApi_Func;
		appframeworklib->ScriptError_Func = ScriptError_Func;
		return appframeworklib;
	}
	return NULL;
}