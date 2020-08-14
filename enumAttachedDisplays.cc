#include <iostream>
#include <string>
#include "enumAttachedDisplays.h"
#pragma comment(lib, "user32.lib")


NAN_METHOD(enumAttachedDisplays)
{
    int fResult = GetSystemMetrics(SM_CMONITORS); 
    info.GetReturnValue().Set(fResult);
}