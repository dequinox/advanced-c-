#include <iostream>
#include <vector>
using namespace std;

int main()
{
      int value{5};
      cout << value << endl;

      string text{"Hello"};
      cout << text << endl;

      int numbers[]{1,4,5};
      cout << numbers[1] << endl;

      int *pInts = new int[5]{1,2,3,4,5};
      cout << pInts[1] << endl;
      delete [] pInts;

      int value1{};
      cout << value1 << endl;

      int *pSmth{}; // equivalent to pSmth = nullptr;
      cout << pSmth << endl;

      int numbers1[5]{};
      cout << numbers1[1] << endl;

      struct {
            string text;
            int id;
      } s1{"hello", 3};
      cout << s1.text << endl;

      vector <string> strings{"one", "two", "thtree"};

      cout << strings[2] << endl;
      return 0;
}
