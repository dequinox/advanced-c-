#include <iostream>
#include <fstream>
using namespace std;

#pragma pack(push, 1)
struct Person
{
      char name[50];
      int age;
      double weight;
};
#pragma pack(pop)

int main()
{
      Person someone = {"John", 25, 70};

      string fileName = "text.bin";


      // Write binary file ///////
      ofstream outFile;

      outFile.open(fileName, ios::binary);

      if (outFile.is_open())
      {
            outFile.write(reinterpret_cast<char *>(&someone), sizeof(Person));
            outFile.close();
      }
      else
      {
            cout << "Could not create file: " + fileName << endl;
      }

      // Read binary file //////

      Person someoneElse = {};

      ifstream inFile;

      inFile.open(fileName, ios::binary);

      if (inFile.is_open())
      {
            inFile.read(reinterpret_cast<char *>(&someoneElse), sizeof(Person));
            inFile.close();
      }
      else
      {
            cout << "Could not read file: " + fileName << endl;
      }

      cout << someoneElse.name << "," << someoneElse.age << ","
           << someoneElse.weight << endl;

      return 0;
}
