#include <iostream>
#include <vector>
#include <memory.h>
using namespace std;

class Test
{
      private:
            static const int SIZE=100;
            int *_pBuffer;
      public:
      Test()
      {
            cout << "constructor" << endl;
            _pBuffer = new int[SIZE]{};
      }
      Test(int i)
      {
            cout << "parametrized constructor" << endl;
            _pBuffer = new int[SIZE]{};

            for (int j = 0; j < SIZE; j++)
            {
                  _pBuffer[j] = i;
            }
      }
      Test(const Test &other)
      {
            cout << "copy constructor" << endl;
            _pBuffer = new int[SIZE]{};

            memcpy(_pBuffer, other._pBuffer, SIZE*sizeof(int));
      }
      friend void swap(Test& lhs, Test& rhs);

      Test& operator=(const Test& other) {
            cout << "assignment operator" << endl;
       Test temp(other); // Call copy constructor
       swap(*this, temp); // Swap our data members with temp
       return *this;
       // Call temp's destructor
}
      ~Test()
      {
            cout << "destructor" << endl;
            delete [] _pBuffer;
      }

      friend ostream &operator<<(ostream &out, const Test &test);
};

void swap(Test& lhs, Test& rhs) {
  swap(lhs._pBuffer, rhs._pBuffer);
}

ostream &operator<<(ostream &out, const Test &test)
{
      out << " Hello from test";
      return out;
}

Test getTest()
{
      return Test();
}

int main()
{
      Test test1 = getTest();
      Test test2, test3;
      test2 = test3;

      cout << test1 << endl;
      return 0;
}
