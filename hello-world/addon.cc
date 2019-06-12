#include <node.h>
#include <iostream>

using namespace v8;
using namespace std;

void helloWorld(const FunctionCallbackInfo<Value> &args)
{
   cout << "Hello, world!" << endl;
}

void bubbleSort(const FunctionCallbackInfo<v8::Value> &args)
{
   Isolate *isolate = args.GetIsolate();
   double result = 0;
   std::vector<int> arr;
   int i, j;
   int length = 50000;
   for (i = length; i > 0; i--)
   {
      arr.push_back(i);
   }
   for (i = 0; i < length; i++)
   {
      for (j = 0; j <= length - i - 1; j++)
      {
         if (arr[j] > arr[j + 1])
         {
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
         }
      }
   }
}

void Initialize(Local<Object> exports)
{
   NODE_SET_METHOD(exports, "bubbleSort", bubbleSort);
   NODE_SET_METHOD(exports, "getSomethingFromAddOn", helloWorld);
}

NODE_MODULE(addon, Initialize);