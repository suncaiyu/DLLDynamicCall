#include <Windows.h>
#include "export.h"
#include <iostream>
using namespace std;

typedef DLL*(*MyGetInstance)();
int main()
{
    int a;
    HINSTANCE hDll;//句柄
    MyGetInstance instance;//函数指针
    while (cin >> a) {
        if (a == 2) {
            hDll = ::LoadLibrary("D:\\project\\DynamicLibrary2\\Debug\\DynamicLibrary2.dll");//动态加载DLL模块句柄
            if (hDll)
            {
                instance = (MyGetInstance)GetProcAddress(hDll, "Getinstance");//得到所加载DLL模块中函数的地址
                if (instance == nullptr) {
                    return 0;
                }
                DLL *dll = instance();
                dll->output();
                FreeLibrary(hDll);//释放已经加载的DLL模块
            }
        }
        else if (a == 3) {
            hDll = ::LoadLibrary("D:\\project\\DynamicLibrary2\\Debug\\DynamicLibrary3.dll");//动态加载DLL模块句柄
            if (hDll)
            {
                instance = (MyGetInstance)GetProcAddress(hDll, "?Getinstance@@YAPAVDynamicLibrary3@@XZ");//得到所加载DLL模块中函数的地址
                if (instance == nullptr) {
                    return 0;
                }
                DLL *dll = instance();
                dll->output();
                FreeLibrary(hDll);//释放已经加载的DLL模块
            }
        }
    }    
    return 0;
}