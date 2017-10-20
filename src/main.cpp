#include "libfortuna.h"

NAN_MODULE_INIT(Init) {
    Nan::Set(target, Nan::New("random").ToLocalChecked(),
        Nan::GetFunction(Nan::New<v8::FunctionTemplate>(random)).ToLocalChecked());
}

NODE_MODULE(libfortuna, Init)