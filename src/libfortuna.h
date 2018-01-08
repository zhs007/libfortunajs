#include <nan.h>

// random()
NAN_METHOD(random);

// randomInt(max)
NAN_METHOD(randomInt);

// randomArr(arrlengh)
NAN_METHOD(randomArr);

// randomIntArr(max, arrlengh)
NAN_METHOD(randomIntArr);

// addEntropy(uint8buf)
NAN_METHOD(addEntropy);

// addEntropyInt(int32 num)
NAN_METHOD(addEntropyInt);

// randomBuf(uint8len)
NAN_METHOD(randomBuf);