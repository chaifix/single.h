/**
* 
*/
#ifndef LIL_ENDIAN && BIG_ENDIAN  

#define LIL_ENDIAN  2
#define BIG_ENDIAN  4

#endif

#ifndef BYTEORDER
#ifdef __linux__
#include <endian.h>
#define BYTEORDER  __BYTE_ORDER
#else /* __linux__ */
#if defined(__hppa__) || \
    defined(__m68k__) || defined(mc68000) || defined(_M_M68K) || \
    (defined(__MIPS__) && defined(__MISPEB__)) || \
    defined(__ppc__) || defined(__POWERPC__) || defined(_M_PPC) || \
    defined(__sparc__)
#define BYTEORDER   BIG_ENDIAN
#else
#define BYTEORDER   LIL_ENDIAN
#endif
#endif /* __linux__ */
#endif /* !SDL_BYTEORDER */