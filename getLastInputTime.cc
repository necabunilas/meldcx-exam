#include <nan.h>
#include <iostream>
#include <string>
#include "getLastInputTime.h"
#pragma comment(lib, "user32.lib")


NAN_METHOD(getLastInputTime)
{
    LASTINPUTINFO lastInPut;
    lastInPut.cbSize = sizeof(&lastInPut);
    GetLastInputInfo(&lastInPut);
    int ret = GetTickCount() - lastInPut.dwTime;
    info.GetReturnValue().Set(ret);
}