#include <iostream>
#include <map>
using namespace std;

int main()
{
      map <string, int> ages;

      ages["Mike"] = 40;
      ages["Vicky"] = 30;
      ages["Rai"] = 20;

      ages["Mike"] = 23;

      ages.insert(make_pair("Peter", 60));

      if (ages.find("Sue") != ages.end())
      {
            cout << "Found Sue" << endl;
      }
      else
      {
            cout << "Key not found" << endl;
      }

      map <string, int>::iterator it;
      for (it = ages.begin(); it != ages.end(); it++)
      {
            pair <string, int> age = *it;
            cout << age.first << " : " << age.second << endl;
      }
      for (it = ages.begin(); it != ages.end(); it++)
      {
            cout << it->first << " : " << it->second << endl;
      }

      return 0;
}
