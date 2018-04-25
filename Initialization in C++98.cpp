#include <iostream>
using namespace std;

int main()
{
      int values[] = {1,2,3,4,5};

      cout << values[1] << endl;

      class C
      {
            public:
                  string text;
                  int id;
      };

      C c1 = {"Hello", 7};

      cout << c1.text << endl;

      struct S {
            string text;
            int id;
      };
      S s1 = {"Hello", 7};

      struct R {
            string text;
            int id;
      } r1 = {"Hello", 7}, r2 = {"Bye", 8};

      cout << r1.text << endl;
      cout << r2.text << endl;
      return 0;
}
