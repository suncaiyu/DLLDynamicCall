#pragma once
#include "export.h"
class __declspec(dllexport) DynamicLibrary2:DLL
{
public:
    DynamicLibrary2();
    ~DynamicLibrary2();
    void output();
};

extern "C" __declspec(dllexport) DynamicLibrary2 *Getinstance();


