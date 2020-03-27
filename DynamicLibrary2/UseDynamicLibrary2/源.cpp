#include <Windows.h>
#include "export.h"
#include <iostream>
using namespace std;

typedef DLL*(*MyGetInstance)();
int main()
{
    int a;
    HINSTANCE hDll;//���
    MyGetInstance instance;//����ָ��
    while (cin >> a) {
        if (a == 2) {
            hDll = ::LoadLibrary("D:\\project\\DynamicLibrary2\\Debug\\DynamicLibrary2.dll");//��̬����DLLģ����
            if (hDll)
            {
                instance = (MyGetInstance)GetProcAddress(hDll, "Getinstance");//�õ�������DLLģ���к����ĵ�ַ
                if (instance == nullptr) {
                    return 0;
                }
                DLL *dll = instance();
                dll->output();
                FreeLibrary(hDll);//�ͷ��Ѿ����ص�DLLģ��
            }
        }
        else if (a == 3) {
            hDll = ::LoadLibrary("D:\\project\\DynamicLibrary2\\Debug\\DynamicLibrary3.dll");//��̬����DLLģ����
            if (hDll)
            {
                instance = (MyGetInstance)GetProcAddress(hDll, "?Getinstance@@YAPAVDynamicLibrary3@@XZ");//�õ�������DLLģ���к����ĵ�ַ
                if (instance == nullptr) {
                    return 0;
                }
                DLL *dll = instance();
                dll->output();
                FreeLibrary(hDll);//�ͷ��Ѿ����ص�DLLģ��
            }
        }
    }    
    return 0;
}