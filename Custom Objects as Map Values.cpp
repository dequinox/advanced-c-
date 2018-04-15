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

            void print()
            {
                  cout << name << " : " << age << endl;
            }
};

int main()
{
      map <int, Person> people;

      people[0] = Person("Mike", 40);
      people[1] = Person("Rai", 20);
      people[2] = Person("Vicky", 30);

      people.insert(make_pair(24, Person("Bob", 46)));
      people.insert(make_pair(25, Person("Sue", 41)));

      map <int, Person>::iterator it;
      for (it = people.begin(); it != people.end(); it++)
      {
            cout << it->first << " : ";
            it->second.print();
      }
      return 0;
}
