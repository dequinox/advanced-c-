#include <iostream>
#include <map>
using namespace std;

class Person
{
      private:
            string name;
            int age;
      public:
            Person() : name(""), age(0) {}

            Person(const Person &other)
            {
                  cout << "Copy constructor running" << endl;
                  name = other.name;
                  age = other.age;
            }

            Person(string name, int age) :
                  name(name), age(age) {}

            void print() const
            {
                  cout << name << " : " << age << flush;
            }

            bool operator< (const Person &other) const
            {
                  if (name == other.name)
                  {
                        return age < other.age;
                  }
                  else
                  {
                        return (name < other.name);
                  }
            }
};

int main()
{
      map <Person, int> people;

      people[Person("Mike", 40)] = 12;
      people[Person("Mike", 440)] = 32;
      people[Person("Rain", 20)] = 23;
      people[Person("Vick", 30)] = 34;

      map <Person, int>::iterator it;
      for (it = people.begin(); it != people.end(); it++)
      {
            cout << it->second << " : " << flush;
            it->first.print();
            cout << endl;
      }
      return 0;
}
