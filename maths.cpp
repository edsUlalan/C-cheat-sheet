#include <iostream>
#include <cmath> // include math library funtions
using namespace std;

int main ()
{
  float numbers = 100;
  numbers = numbers + 10; // this adds 10 to the initial 100
  cout << numbers << "\n";

  numbers = numbers - 10; // this subtracts 10 from the new 110
  cout << numbers << "\n";

  float another_number = 10
  another_number = another_number * 10; // this multiples 10 by 10
  cout << another_number << "\n";

  another_number = another_number / 10; // this divides 100 by 10
  cout << another_number << "\n";

  float power = 12;
  cout << power << " to the power of 2 is " << pow(power, 2) << "\n";
  cout << power << " to the power of 0.5 is " << pow(power, 0.5) << "\n";

  float x = 134;
  cout << "The square root of " << x << "is: " << sqrt(x) << "\n";

  double area, radius = 1.5;
  area = M_PI * radius * radius; // calling M_PI function which is equal to 3.14159
  cout << area << "\n";
}
