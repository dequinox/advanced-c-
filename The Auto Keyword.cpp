#include <iostream>
#include <typeinfo>

using namespace std;

template <typename T, typename S>
auto test(T value1, S value2) -> decltype(value1 + value2)
{
      return value1 + value2;
}

int get()
{
      return 999;
}

auto test2() -> decltype(get())
{
      return get();
}

int main()
{
      auto value = 7;
      auto name = "Bob";

      cout << test(5, 6) << endl;

      cout << test2() << endl;
      return 0;
}
