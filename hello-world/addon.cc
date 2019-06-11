#include <node.h>
#include <iostream>

using namespace v8;
using namespace std;

void helloWorld(const FunctionCallbackInfo<Value>& args) {
   cout << "Hello, world!" << endl;
}

void Initialize(Local<Object> exports) {
   NODE_SET_METHOD(exports, "getSomethingFromAddOn", helloWorld);
}

NODE_MODULE(addon, Initialize);