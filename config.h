/* API declaration export attribute */
// #define AL_API  ${EXPORT_DECL}
// #define ALC_API ${EXPORT_DECL}

#define AL_API
#define ALC_API

/* Define a restrict macro for non-aliased pointers */
// #define RESTRICT ${RESTRICT_DECL}
#define RESTRICT __restrict
#define HAVE_ALSA
#define AL_ALEXT_PROTOTYPES
#define HAVE_PTHREAD_SETNAME_NP
#define DLFCN_H

/* Define if HRTF data is embedded in the library */
// #cmakedefine ALSOFT_EMBED_HRTF_DATA

/* Define if we have the std::aligned_alloc function */
// #cmakedefine HAVE_STD_ALIGNED_ALLOC

/* Define if we have the posix_memalign function */
// #cmakedefine HAVE_POSIX_MEMALIGN

/* Define if we have the _aligned_malloc function */
// #cmakedefine HAVE__ALIGNED_MALLOC

/* Define if we have the proc_pidpath function */
// #cmakedefine HAVE_PROC_PIDPATH

/* Define if we have the getopt function */
// #cmakedefine HAVE_GETOPT

/* Define if we have SSE CPU extensions */
// #cmakedefine HAVE_SSE
// #cmakedefine HAVE_SSE2
// #cmakedefine HAVE_SSE3
// #cmakedefine HAVE_SSE4_1

/* Define if we have ARM Neon CPU extensions */
// #cmakedefine HAVE_NEON

/* Define if we have the ALSA backend */
// #cmakedefine HAVE_ALSA

/* Define if we have the OSS backend */
// #cmakedefine HAVE_OSS

/* Define if we have the Solaris backend */
// #cmakedefine HAVE_SOLARIS

/* Define if we have the SndIO backend */
// #cmakedefine HAVE_SNDIO

/* Define if we have the WASAPI backend */
// #cmakedefine HAVE_WASAPI

/* Define if we have the DSound backend */
// #cmakedefine HAVE_DSOUND

/* Define if we have the Windows Multimedia backend */
// #cmakedefine HAVE_WINMM

/* Define if we have the PortAudio backend */
// #cmakedefine HAVE_PORTAUDIO

// /* Define if we have the PulseAudio backend */
// #cmakedefine HAVE_PULSEAUDIO

// /* Define if we have the JACK backend */
// #cmakedefine HAVE_JACK

// /* Define if we have the CoreAudio backend */
// #cmakedefine HAVE_COREAUDIO

// /* Define if we have the OpenSL backend */
// #cmakedefine HAVE_OPENSL

// /* Define if we have the Oboe backend */
// #cmakedefine HAVE_OBOE

// /* Define if we have the Wave Writer backend */
// #cmakedefine HAVE_WAVE

// /* Define if we have the SDL2 backend */
// #cmakedefine HAVE_SDL2

// /* Define to the size of a long int type */
// #cmakedefine SIZEOF_LONG ${SIZEOF_LONG}

// /* Define if we have dlfcn.h */
// #cmakedefine HAVE_DLFCN_H

// /* Define if we have pthread_np.h */
// #cmakedefine HAVE_PTHREAD_NP_H

// /* Define if we have malloc.h */
// #cmakedefine HAVE_MALLOC_H

// /* Define if we have cpuid.h */
// #cmakedefine HAVE_CPUID_H

// /* Define if we have intrin.h */
// #cmakedefine HAVE_INTRIN_H

// /* Define if we have guiddef.h */
// #cmakedefine HAVE_GUIDDEF_H

// /* Define if we have initguid.h */
// #cmakedefine HAVE_INITGUID_H

// /* Define if we have GCC's __get_cpuid() */
// #cmakedefine HAVE_GCC_GET_CPUID

// /* Define if we have the __cpuid() intrinsic */
// #cmakedefine HAVE_CPUID_INTRINSIC

// /* Define if we have SSE intrinsics */
// #cmakedefine HAVE_SSE_INTRINSICS

// /* Define if we have pthread_setschedparam() */
// #cmakedefine HAVE_PTHREAD_SETSCHEDPARAM

// /* Define if we have pthread_setname_np() */
// #cmakedefine HAVE_PTHREAD_SETNAME_NP

// /* Define if pthread_setname_np() only accepts one parameter */
// #cmakedefine PTHREAD_SETNAME_NP_ONE_PARAM

// /* Define if pthread_setname_np() accepts three parameters */
// #cmakedefine PTHREAD_SETNAME_NP_THREE_PARAMS

// /* Define if we have pthread_set_name_np() */
// #cmakedefine HAVE_PTHREAD_SET_NAME_NP
