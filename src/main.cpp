#include "libfortuna.h"

NAN_MODULE_INIT(Init) {
    Nan::Set(target, Nan::New("random").ToLocalChecked(),
        Nan::GetFunction(Nan::New<v8::FunctionTemplate>(random)).ToLocalChecked());

    Nan::Set(target, Nan::New("randomInt").ToLocalChecked(),
        Nan::GetFunction(Nan::New<v8::FunctionTemplate>(randomInt)).ToLocalChecked());
        
    Nan::Set(target, Nan::New("randomArr").ToLocalChecked(),
        Nan::GetFunction(Nan::New<v8::FunctionTemplate>(randomArr)).ToLocalChecked());
        
    Nan::Set(target, Nan::New("randomIntArr").ToLocalChecked(),
        Nan::GetFunction(Nan::New<v8::FunctionTemplate>(randomIntArr)).ToLocalChecked()); 

    Nan::Set(target, Nan::New("addEntropy").ToLocalChecked(),
        Nan::GetFunction(Nan::New<v8::FunctionTemplate>(addEntropy)).ToLocalChecked()); 

    Nan::Set(target, Nan::New("addEntropyInt").ToLocalChecked(),
        Nan::GetFunction(Nan::New<v8::FunctionTemplate>(addEntropyInt)).ToLocalChecked()); 

    Nan::Set(target, Nan::New("randomBuf").ToLocalChecked(),
        Nan::GetFunction(Nan::New<v8::FunctionTemplate>(randomBuf)).ToLocalChecked());                         
}

NODE_MODULE(libfortuna, Init)