#include <iostream>
using namespace std;

int main()
{
      int one{1};
      int two{2};
      int three{3};

      // capture one two by value
      [one, two](){ cout << one << " " << two << endl;}();

      // capture all by value
      [=](){ cout << one << " " << two << endl; }();

      // capture all by value, but capture three by reference
      [=, &three](){ three=7; cout << three << endl; }();
      cout << three << endl;

      // capture all by reference
      [&](){two = 6; cout << one << " " << two << endl; }();
      cout << two << endl;

      //capture all by reference, but two and three by value
      [&, two, three](){one = 100; cout << one << " " << three << endl; }();


      return 0;
}
