#include <nan.h>
#include <iostream>
#include <powrprof.h>
#include "requestDisplaySleep.h"

#pragma comment(lib, "user32.lib")
#pragma comment(lib, "PowrProf.lib")

NAN_METHOD(requestDisplaySleep)
{
    std::cout << "Request display to sleep!";
    SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM) 2);
}