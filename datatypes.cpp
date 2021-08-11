#include <iostream>
using namespace std;
double PI = 3.141592653589793238463;
typedef int metres; // create own datatype

int main ()
{
  cout.precision(22);
  cout << PI;

  metres distance;
  distance = 15;
  cout << "distance in metres is" << distance;
}
