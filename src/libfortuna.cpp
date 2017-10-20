#include "libfortuna.h"
#include "fortuna.h"

// random()
void random(const Nan::FunctionCallbackInfo<v8::Value>& info) {
    int cr = 0;
    fortuna_get_bytes(4, (uint8*)&cr);
    v8::Local<v8::Number> num = Nan::New<v8::Number>(cr);
    info.GetReturnValue().Set(num);
}