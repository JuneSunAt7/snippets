#ifdef HEAD1_EXPORTS
#define HEAD1_API __declspec(dllexport)
#else
#define HEAD1_API __declspec(dllimport)
#endif

HEAD1_API int add(int a, int b);
