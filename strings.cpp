#include <iostream>
using namespace std;

int main ()
{
  char greet[8] = {'W','e','l','c','o','m','e','\0'}; // this is an array
  cout << greet << "\n";

  char greet[] = "Welcome";
  cout << greet << "\n";

  string greet = "Welcome";
  cout << greet << "\n";
  cout << "The length of the string is: ";
  cout << greet.size() << "\n"; // getting the length of a string

  int length
  string greet1 = "Hello";
  string greet2 = ", world!";
  string greet3 = greet1 + greet2; // concantinate strings
  cout << greet3 << "\n";
  length = greet3.size();
  cout << "The length of the combined strings is: " << length << "\n";

  string strg ("Here is a long sentence in a string.");
  cout << strg << "\n";

  strg.erase (10, 5); // remove character from the string
  cout << strg << "\n";

  strg.erase (strg.begin()+8);
  cout << strg << "\n";

  strg.erase (strg.begin()+9, strg.end()-9);
  cout << strg << "\n";
}
