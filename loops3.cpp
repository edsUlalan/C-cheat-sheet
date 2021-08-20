#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
  // For Loop Begins
  for( int num = 1; num < 30; num = num + 1)
  {
    cout << "Number: " << num << endl;
  }
  return 0;

  // create a 10 second countdown
  for(int a = 10; a != 0; a = a - 1)
  {
    cout << a << endl;
    Sleep(1000);
  }
  cout << "\nBlast Off!" << endl;
  return 0;

  // include user input
  int i, n, fact = 1;

  cout << "Enter a whole number: ";
  cin >> n;
  for (i = 1; i <= n; ++i) {
    fact *= i;
  }
  cout << "\nFactorial of "<< n <<" = "<< fact << endl;
  return 0;
}
