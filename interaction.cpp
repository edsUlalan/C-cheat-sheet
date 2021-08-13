#include <iostream>
using namespace std;

int main ()
{
  int age;
  cout << "what is your age: ";
  cin >> age;

  cout <<"\nYou are " << age << " years old. \n";

  string name;
  cout << "what is your name: ";
  cin >> name;

  cout << "\nHello, " << name << ". I hope you're well today?\n";

  int num1, num2;
  cout << "Enter two whole numbers: ";
  cin >> num1 >> num2;
  cout << "you entered " << num1 << " and" << num2 << "\n";

  float num3, num4;
  cout << "Enter two numbers: \n";
  cin >> num3 >> num4;
  cout << num3 << " + " << num4 << " is: " << num1 + num2 << "\n";

  string mystr;
  cout << "Enter a sentence: \n";
  getline(cin, mystr); // take multiple words as input

  cout << "Your sentence is: " << mystr.size() << " characters long. \n";

  string name;
  cout << "Enter your full name: \n";
  getline(cin, name);

  cout << "\nHello, " << name << "\n";
}
