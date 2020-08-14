#include <nan.h>
#include "enumAttachedDisplays.h"  
#include "getLastInputTime.h"
#include "requestDisplaySleep.h"
#include "requestDisplayWake.h"

using v8::FunctionTemplate;
using v8::Handle;
using v8::Object;
using v8::String;
using Nan::GetFunction;
using Nan::New;
using Nan::Set;

// Expose synchronous and asynchronous access to our
NAN_MODULE_INIT(InitAll) {
  Set(target, New<String>("enumAttachedDisplays").ToLocalChecked(),
    GetFunction(New<FunctionTemplate>(enumAttachedDisplays)).ToLocalChecked());

  Set(target, New<String>("getLastInputTime").ToLocalChecked(),
    GetFunction(New<FunctionTemplate>(getLastInputTime)).ToLocalChecked());

  Set(target, New<String>("requestDisplaySleep").ToLocalChecked(),
    GetFunction(New<FunctionTemplate>(requestDisplaySleep)).ToLocalChecked());
  
  Set(target, New<String>("requestDisplayWake").ToLocalChecked(),
    GetFunction(New<FunctionTemplate>(requestDisplayWake)).ToLocalChecked());
}

NODE_MODULE(index, InitAll)