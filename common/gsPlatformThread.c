///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
#if !defined(GSI_NO_THREADS)
#include "gsCommon.h"


// Include platform separated functions
#if defined(_X360)
	#include "x360/gsThreadX360.c"
#elif defined(_XBOX)
	//#include "xbox/gsThreadXBox.c"
#elif defined(_WIN32)
	#include "win32/gsThreadWin32.c"
#elif defined(_MACOSX) || defined (_IPHONE)
	#include "macosx/gsThreadMacOSX.c"
#elif defined (_LINUX)
	#include "linux/gsThreadLinux.c"
#elif defined(_NITRO)
	#include "nitro/gsThreadNitro.c"
#elif defined(_PS2)
	#include "ps2/gsThreadPs2.c"
#elif defined(_PS3)
//  #include "ps3/gsThreadPS3.c"
#elif defined(_PSP)
//  #include "psp/gsThreadPSP.c"
#elif defined(_REVOLUTION)
	#include "revolution/gsThreadRevoulution.c"
#else
	#error "Missing or unsupported platform"
#endif


#if defined(__cplusplus)
extern "C" {
#endif


///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
#if defined(__cplusplus)
}
#endif

#endif // GSI_NO_THREADS
