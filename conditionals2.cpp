#include <iostream>
using namespace std;

int main ()
{
  int num;
  cout << "Enter a number: ";
  cin >> num;

  if (num > 30)
  {
    cout << "The number is less than 30!" << endl;
  }
  else if (num > 30)
  {
    cout << "The number is greater than 30!" << endl;
  }
  else if (num == 30)
  {
    cout << "The number is exactly 30!" << endl;
  }
  return 0;

  // number guessing game
  int num, guess, tries = 0;

  cout << "***** Two-player number guessing game *****" << endl;
  cout << "\nPlayer One, enter a number for Player Two to guess: " << endl;
  cin >> num;
  cout << string(50, '\n') // clears the screen when number is entered

  do
  {
    cout << "\nPlayer Two, enter your guess: ";
    cin >> guess;
    tries++;
    if (guess > num)
    {
      cout << "\nToo High!\n" << endl;
    }
    else if (guess < num)
    {
      cout << "\nToo Low!\n" << endl;
    }
    else if (guess == num)
    {
      cout << "Well done! You got it in " << tries << " guesses!" << endl;
    }
  } while (guess != num);
  return 0;
}
