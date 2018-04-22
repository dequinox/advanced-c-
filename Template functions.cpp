#include <iostream>
using namespace std;

template<class T>
void print(T n)
{
      cout << "Template version ";
      cout << n << endl;
}

void print(int value)
{
      cout << "Non template version " << value << endl;
}

template<class T>
void show()
{
      cout << T() << endl;
}

int main()
{
      print<string>("Hello");
      print<int>(5);

      print<>(6);
      return 0;
}
