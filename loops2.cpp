#include <iostream>
#include <fstream>
#include <windows.h> // add new library to use Sleep()
using namespace std;

int main ()
{
  string word;
  ifstream newfile ("C:\\users\\david\\Documents\\Cimmeria.txt");
  cout << "Cimmeria, by Robert E Howard: \n" << endl;

  while (newfile >> word)
  {
    cout << word << endl;
    Sleep(1000); // works in milliseconds
  }
  return 0;

  int a = 10;
  while (a != 0)
  {
    cout << a << endl;
    a = a - 1;
    Sleep(1000);
  }
  cout << "\nBlast Off!" << endl;
  return 0;
}
