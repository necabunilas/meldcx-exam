#include <nan.h>
#include <iostream>
#include <powrprof.h>
#include "requestDisplayWake.h"

#pragma comment(lib, "user32.lib")
#pragma comment(lib, "PowrProf.lib")

NAN_METHOD(requestDisplayWake)
{
    //Used Mouse movement to simulate wake up display
    Sleep(500);
    mouse_event(MOUSEEVENTF_MOVE, 0, 1, 0, NULL);
    Sleep(50);
    mouse_event(MOUSEEVENTF_MOVE, 0, -1, 0, NULL);
    bool ret = true; //return true to make sure that code passed here
    info.GetReturnValue().Set(ret);
}