#pragma once

#define WIN32_LEAN_AND_MEAN             // Exclure les en-têtes Windows rarement utilisés
// Fichiers d'en-tête Windows
#include <windows.h>


#ifdef TEST_EXPORTS
#define TEST_API __declspec(dllexport)
#else
#define TEST_API __declspec(dllimport)
#endif


TEST_API const char* __stdcall get_char();


TEST_API int __stdcall add_int(int a, int b);

double add_double(double a, double b)
{
	return a + b;
}
