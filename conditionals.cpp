#include <iostream>
using namespace std;

int main () {
  int num = 1;
  if (num < 30) {
    cout << "The number is less than 30." << endl;
  }
  cout << "Value of a number is: " << num << endl;
  return 0;

  // include if statement within a do... while loop
  float temp;
  do {
    cout << "\nEnter the temperature (or -10000 to exit): " << endl;
    cin >> temp;
    if (temp <= 0)
    {
      cout << "\nBrrrr, it's really cold!" << endl;
    }
    if (temp > 0)
    {
      cout << "\nAt least it's not freezing!" << endl;
    }
    while (temp != -10000);
    cout << "\nGood bye\n" << endl;
    return 0;
  }
}
