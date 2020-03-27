#pragma once
#include "export.h"
class DynamicLibrary3:DLL
{
public:
    DynamicLibrary3();
    ~DynamicLibrary3();
    void output();
};

__declspec(dllexport) DynamicLibrary3 *Getinstance();
