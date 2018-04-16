#include <iostream>
#include <stack>
#include <queue>
using namespace std;

class Test
{
      private:
            string name;
      public:
            Test(string name) : name(name) {}

            ~Test()
            {
                  cout << " Calling Destructor for : " << name << endl;
            }

            void print()
            {
                  cout << name << endl;
            }
};
int main()
{
      // LIFO
      stack<Test> testStack;

      testStack.push(Test("Mike"));
      testStack.push(Test("John"));
      testStack.push(Test("Sue"));

      /*
      * This is invalid code. Object is destroyed
      Test &test1 = testStack.top();
      testStack.pop();
      test1.print();
      */

      while (testStack.size())
      {
            Test &test = testStack.top();
            test.print();
            testStack.pop();
      }

      // FIFO
      queue<Test> testQueue;

      testQueue.push(Test("Mike"));
      testQueue.push(Test("John"));
      testQueue.push(Test("Sue"));

      /*
      * This is invalid code. Object is destroyed
      Test &test1 = testStack.top();
      testStack.pop();
      test1.print();
      */

      testQueue.back().print();

      while (testQueue.size())
      {
            Test &test = testQueue.front();
            test.print();
            testQueue.pop();
      }
      return 0;
}
