#pragma once

#ifdef ROT_PLATFORM_WINDOWS
	#ifdef ROT_BUILD_DLL
		#define ROT_API __declspec(dllexport)
	#else
		#define ROT_API __declspec(dllimport)
	#endif
#else
	#error ROT is Windows Only
#endif