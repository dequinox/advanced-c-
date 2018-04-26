#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
using namespace std;

bool check(string &test)
{
      return test.length() == 3;
}

struct Test
{
      private:
      public:
            bool operator()(string &test)
            {
                  return test.length() == 5;
            }
} functor_check;

void run(function<bool(string&)> check)
{
      string test = "stars";
      cout << check(test) << endl;
}

int main()
{
      unsigned int size = 5;

      vector <string> vec{"one", "two", "three"};

      auto lambda = [size](string test){ return test.length() == size; };

      int count = count_if(vec.begin(), vec.end(), lambda);
      cout << count << endl;

      count = count_if(vec.begin(), vec.end(), check);
      cout << count << endl;

      count = count_if(vec.begin(), vec.end(), functor_check);
      cout << count << endl;

      run(lambda);
      run(check);
      run(functor_check);

      function<int(int,int)> add = [](int a, int b){ return a + b; };
      cout << add(5, 6) << endl;
      return 0;
}
