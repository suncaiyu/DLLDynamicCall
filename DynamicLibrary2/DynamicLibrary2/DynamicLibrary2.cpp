#include "DynamicLibrary2.h"

#include <iostream>
using namespace std;

DynamicLibrary2::DynamicLibrary2()
{
}


DynamicLibrary2::~DynamicLibrary2()
{
}

void DynamicLibrary2::output()
{
    cout << "dynamic 2" << endl;
}

DynamicLibrary2 *Getinstance()
{
    return new DynamicLibrary2;
}
