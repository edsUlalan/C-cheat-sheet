// do... while loops
#include <iostream>
using namespace std;

int main ()
{
  int num = 1;
  do {
    cout << "Number: " << num << endl;
    num = num + 1;
  }
  while (num < 30);
  return 0;

  // add up user inputted numbers until the users enters zero
  float number, sum = 0.0;
  cout << "**** Program to execute a Do... While loop continuously ****" << endl;
  cout << "\nEnter 0 to stop and display the sum of all the numbers entered\n" << endl;
  cout << "\n---------------------------------------------------\n" endl;

  do {
    cout << "\nPlease enter a number: ";
    cin >> number;
    sum += number;
  }
  while(number != 0.0);
  cout << "Total sum of all numbers: " << sum;
  return 0;

  // using the countdown and blast off!
  int a = 10;
  do {
    cout << a << endl;
    a = a - 1;
  }
  while (a != 0);

  cout << "\nBlast Off!" << endl;
  return 0;
}
