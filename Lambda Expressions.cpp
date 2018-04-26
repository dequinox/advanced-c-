#include <iostream>
using namespace std;

void test(void (*pFunc)())
{
      pFunc();
}

int main()
{
      auto func = [](){ cout << "Hello World" << endl; };
      func();

      test(func);
      test([](){ cout << "Hello world" << endl;});
      return 0;
}
