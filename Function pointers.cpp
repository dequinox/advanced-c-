#include <iostream>
using namespace std;

int test(int value)
{
      return value;
}

int main()
{
      cout << test(7) << endl;

      int (*pTest)(int) = test;

      cout << pTest(8) << endl;

      return 0;
}
