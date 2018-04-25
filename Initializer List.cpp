#include <iostream>
#include <vector>
using namespace std;

class Test
{
      private:
      public:
            Test(initializer_list<string> texts)
            {
                  for (auto text : texts)
                        cout << text << endl;
            }

            void print(initializer_list<string> texts)
            {
                  for (auto text : texts)
                        cout << text << endl;
            }
};

int main()
{
      vector <int> numbers {1,2,3,4,5};
      cout << numbers[2] << endl;

      Test test{"apple", "orange", "banana"};
      test.print({"one", "two", "three", "four"});

      return 0;
}
