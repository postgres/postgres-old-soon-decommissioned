/* $Header$ */

#define HAS_TEST_AND_SET

#ifdef BUILDING_DLL
#define DLLIMPORT __declspec (dllexport)
#else
#define DLLIMPORT __declspec (dllimport)
#endif

#if defined(_DLL)
#define DLLIMPORT __declspec (dllexport)
#else
#define DLLIMPORT __declspec (dllimport)
#endif
