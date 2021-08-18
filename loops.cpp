#include <iostream>
using namespace std;

int main ()
{
  int num = 1;
  while (num < 30)
  {
    cout << "Number: " << num << endl;
    num = num + 1;
  }
  return 0;

  // if you don't want ti see the continuous increase in number
  int number = 0;
  while (num < 30)
  {
    num++;
    cout << "Number: " << num << endl;
  }
  return 0;
}
