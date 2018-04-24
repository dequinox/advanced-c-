#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool match(const string &test)
{
      return test.size() == 3;
}

int countStrings(vector<string> &texts, bool (*match)(const string &test))
{
      int counter = 0;
      for (unsigned int i = 0; i < texts.size(); i++)
      {
            if (match(texts[i]))
            {
                  counter++;
            }
      }
      return counter;
}

int main()
{
      vector<string> texts;
      texts.push_back("one");
      texts.push_back("two");
      texts.push_back("three");
      texts.push_back("two");
      texts.push_back("four");
      texts.push_back("two");
      texts.push_back("three");

      cout << match("one") << endl;

      cout << count_if(texts.begin(), texts.end(), match) << endl;

      cout << countStrings(texts, match);
      return 0;
}
