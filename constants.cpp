#include <iostream>
using namespace std;
#define LENGTH 50
#define WIDTH 40
#define HEIGHT 60
#define NEWLINE '\n'
#define PI 3.14159

int main ()
{
  cout << "Length is: " << LENGTH << "\n";
  cout << "Width is: " << WIDTH << "\n";
  cout << "Height is: " << HEIGHT << NEWLINE;
  cout << "The value of Pi is: " << PI << endl;

  const double PI 3.14159; // define a constant using const keyword
  cout << "The value of Pi is: " << PI << endl;
}
