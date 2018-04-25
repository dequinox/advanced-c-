#include <iostream>
#include "ring.h"
using namespace std;

int main()
{
      ring<string> textstring(3);

      textstring.add("one");
      textstring.add("two");
      textstring.add("three");
      textstring.add("four");

      // C++ 98 style
      for (ring<string>::iterator it = textstring.begin(); it != textstring.end(); it++)
      {
            cout << *it << endl;
      }

      cout << endl;

      // C++ 11 style
      for (auto text : textstring)
      {
            cout << text << endl;
      }
      return 0;
}
