#include "DynamicLibrary3.h"

#include <iostream>
using namespace std;

DynamicLibrary3::DynamicLibrary3()
{
}


DynamicLibrary3::~DynamicLibrary3()
{
}
void DynamicLibrary3::output()
{
    cout << "Dynamic 3" << endl;
}

DynamicLibrary3 *Getinstance()
{
    return new DynamicLibrary3;
}