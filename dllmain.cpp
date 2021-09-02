// dllmain.cpp : Définit le point d'entrée de l'application DLL.
#include "framework.h"

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;

}


TEST_API const char* __stdcall get_char()
{
    return "coucou toi !";
}

TEST_API int __stdcall add_int(int a, int b)
{
    return a + b;
}
