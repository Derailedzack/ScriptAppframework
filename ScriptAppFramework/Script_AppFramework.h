#pragma once
//TODO: Fix/Add include guards
//TODO: Find a better name for this

typedef enum InterpType {
	NONE,
	FILE,
	TEXT
}InterpType;
typedef struct Appframework_Lib {
	const char* name;
	void (*Init_Func)();
	void (*RegisterApi_Func)();
	void (*ScriptError_Func)();
	
}Appframework_Lib;
typedef struct DebugScriptLib {
	void (*CreateInterp_Func)(InterpType interp_type);
}DebugScriptLib;
Appframework_Lib* CreateAppFrameworkLib(const char* name, void* init_func, void* registerapi_func, void* scripterror_func);
void DestroyAppFrameworkLib(Appframework_Lib* appframeworklib);