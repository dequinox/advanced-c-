#include <iostream>
using namespace std;

class Test
{
      private:
            int id {3};
            string name {"Mike"};
      public:
            Test() = default;
            Test(const Test &other) = default;
            Test &operator=(const Test &other) = default;

            Test(int id) : id(id) {}
            void print()
            {
                  cout << id << ": " << name << endl;
            }
};

int main()
{
      Test test;
      test.print();

      Test test1(78);
      test1.print();

      Test test2 = test1;
      test2 = test;
      return 0;
}
