#include <iostream>
#include <fstream>
using namespace std;

int main()
{
      string fileName = "text.txt";
      ifstream input;

      input.open(fileName);

      if (!input.is_open())
            return 1;

      while (input)
      {
            string line;
            int population;

            getline(input, line, ':');
            input >> population;

            //input.get();
            input >> ws; // c++11 read whitespace

            if (!input)
            {
                  break;
            }

            cout << "'" << line << "'" << " -- '" << population << "'" << endl;

      }

      input.close();
      return 0;
}
