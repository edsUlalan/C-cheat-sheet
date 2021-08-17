#include <iostream>
#include <fstream> // include for file manipulation
using namespace std;

int main ()
{
  // taking an input and writing to a file
  string name;
  ofstream newfile;
  newfile.open("name.txt");

  cout << "Enter your name: " << endl;
  getline(cin, name);

  newfile << name << endl;
  newfile.close();

  // reading a file and output it on screen
  string line;
  ifstream newfile ("name.txt");

  cout << "Contents of the file: " << endl;
  getline(newfile, line);

  cout << line << endl;
  newfile.close();

  // for multiple lines
  string line;
  ifstream newfile ("c:\\users\\david\\Documents\\Cimmeria.txt");

  cout << "Cimmeria, by Robert E Howard: \n" << endl;
  while (getline(newfile, line))
  cout << line << endl;
  newfile.close();

  // another example
  string name;
  int age;

  ofstream newfile;
  newfile.open("name.txt");

  cout << "Enter your name: " << endl;
  getline(cin, name);

  newfile << name << endl;

  cout << "\nHow old are you: " << endl;
  cin >> age;

  newfile << age << endl;
  newfile.close();
}
