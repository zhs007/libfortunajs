#include "libfortuna.h"
#include "libfortuna/fortuna.h"

// random()
void random(const Nan::FunctionCallbackInfo<v8::Value>& info) {
    unsigned int cr = 0;
    fortuna_get_bytes(4, (uint8*)&cr);
    v8::Local<v8::Number> num = Nan::New<v8::Number>(cr);
    info.GetReturnValue().Set(num);
}

// randomInt(max)
void randomInt(const Nan::FunctionCallbackInfo<v8::Value>& info) {
    if (info.Length() != 1) {
        Nan::ThrowTypeError("randomInt: Wrong number of arguments.");

        return;
    }

    if (!info[0]->IsNumber()) {
        Nan::ThrowTypeError("randomInt: Wrong arguments.");

        return;
    }

    v8::Local<v8::Number> max = info[0].As<v8::Number>();
    if (max->Value() <= 0) {
        Nan::ThrowTypeError("randomInt: Invalid max velue.");
        
        return;
    }

    unsigned int maxval = (unsigned int)max->Value();

    unsigned int cr = 0;
    fortuna_get_bytes(4, (uint8*)&cr);
    v8::Local<v8::Number> num = Nan::New<v8::Number>(cr % maxval);
    info.GetReturnValue().Set(num);
}

// randomArr(arrlengh)
void randomArr(const Nan::FunctionCallbackInfo<v8::Value>& info) {
    if (info.Length() != 1) {
        Nan::ThrowTypeError("randomArr: Wrong number of arguments.");

        return;
    }

    if (!info[0]->IsNumber()) {
        Nan::ThrowTypeError("randomArr: Wrong arguments.");

        return;
    }

    v8::Local<v8::Number> len = info[0].As<v8::Number>();
    if (len->Value() <= 0) {
        Nan::ThrowTypeError("randomArr: Invalid len velue.");
        
        return;
    }

    v8::Local<v8::Array> arr = Nan::New<v8::Array>();

    int lenval = (int)len->Value();
    for (int i = 0; i < lenval; ++i) {
        unsigned int cr = 0;
        fortuna_get_bytes(4, (uint8*)&cr);
        v8::Local<v8::Number> num = Nan::New<v8::Number>(cr);
        arr->Set(i, num);
    }

    info.GetReturnValue().Set(arr);
}

// randomIntArr(max, arrlengh)
void randomIntArr(const Nan::FunctionCallbackInfo<v8::Value>& info) {
    if (info.Length() != 2) {
        Nan::ThrowTypeError("randomIntArr: Wrong number of arguments.");

        return;
    }

    if (!info[0]->IsNumber() || !info[1]->IsNumber()) {
        Nan::ThrowTypeError("randomIntArr: Wrong arguments.");

        return;
    }

    v8::Local<v8::Number> max = info[0].As<v8::Number>();
    v8::Local<v8::Number> len = info[1].As<v8::Number>();

    if (max->Value() <= 0) {
        Nan::ThrowTypeError("randomIntArr: Invalid max velue.");
        
        return;
    }

    if (len->Value() <= 0) {
        Nan::ThrowTypeError("randomIntArr: Invalid len velue.");
        
        return;
    }

    int lenval = (int)len->Value();
    unsigned int maxval = (unsigned int)max->Value();

    v8::Local<v8::Array> arr = Nan::New<v8::Array>();
    
    for (int i = 0; i < lenval; ++i) {
        unsigned int cr = 0;
        fortuna_get_bytes(4, (uint8*)&cr);
        v8::Local<v8::Number> num = Nan::New<v8::Number>(cr % maxval);
        arr->Set(i, num);
    }

    info.GetReturnValue().Set(arr);
}