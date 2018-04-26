#include <iostream>
using namespace std;

class Parent
{
      private:
            int dogs{5};
            string text{"hello"};
      public:
            Parent() : Parent("hello")
            {
                  cout << "No parameter parent constructor" << endl;
            }
            Parent(string text)
            {
                  this->text = text;
                  cout << "string parent constructor" << endl;
            }
};

class Child: public Parent {
      public:
            Child() = default;
};

int main()
{
      Parent parent("QWEll");
      Child child;

      return 0;
}
