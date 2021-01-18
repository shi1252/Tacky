#pragma once

#ifdef TACKY_PLATFORM_WINDOWS
	#ifdef TACKY_BUILD_DLL
		#define TACKY_API __declspec(dllexport)
	#else
		#define TACKY_API __declspec(dllimport)
	#endif
#else
	#error Tacky support only Windows!
#endif