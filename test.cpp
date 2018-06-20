#include "mylog.h"

int main(){

	LogWarn("hello log4cpp %d %s", 1, "warn");
	LogError("hello log4cpp %d %s", 2, "error");
	LogDebug("hello log4cpp %d %s", 3, "debug");
	LogInfo("hello log4cpp %d %s", 4, "info");
	
	
	return 0;
}
