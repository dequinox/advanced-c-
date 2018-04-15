#include <iostream>
#include <map>
using namespace std;

int main()
{
      multimap<int, string> lookup;

      lookup.insert(make_pair(30, "Mike"));
      lookup.insert(make_pair(10, "Vick"));
      lookup.insert(make_pair(30, "Rain"));
      lookup.insert(make_pair(20, "Paul"));

      multimap<int, string>::iterator it;
      for (it = lookup.begin(); it != lookup.end(); it++)
      {
            cout << it->first << " : " << it->second << endl;
      }

      cout << endl;

      for (it = lookup.find(20); it != lookup.end(); it++)
      {
            cout << it->first << " : " << it->second << endl;
      }

      cout << endl;
      pair <multimap<int, string>::iterator, multimap<int, string>::iterator> its = lookup.equal_range(30);

      for (it = its.first; it != its.second; it++)
      {
            cout << it->first << " : " << it->second << endl;
      }

      cout << endl;
      auto its2 = lookup.equal_range(30);

      for (it = its2.first; it != its2.second; it++)
      {
            cout << it->first << " : " << it->second << endl;
      }

      return 0;

}
