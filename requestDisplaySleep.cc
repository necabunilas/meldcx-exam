#include <nan.h>
#include <iostream>
#include <powrprof.h>
#include "requestDisplaySleep.h"

#pragma comment(lib, "user32.lib")
#pragma comment(lib, "PowrProf.lib")

NAN_METHOD(requestDisplaySleep)
{
    //Used PostMessage to receive a return value instead of SendMessage
    bool ret = PostMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM) 2); 
    info.GetReturnValue().Set(ret);
}