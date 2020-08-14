#include <nan.h>
#include <iostream>
#include <powrprof.h>
#include "requestDisplayWake.h"

#pragma comment(lib, "user32.lib")
#pragma comment(lib, "PowrProf.lib")

NAN_METHOD(requestDisplayWake)
{
    std::cout << "Request display to wake!";
    SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM) -1);
}