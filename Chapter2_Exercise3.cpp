#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	
	int tries = 0;
	int guess;
	int secretNumber;
	int x = 100;
	cout << "\tWelcome to Guess Ìó Number\n\n";

	cout << "Enter à secretNumber 0 - 100: ";
	cin >> secretNumber;

	do
	{
		++tries;
		srand(static_cast<unsigned int>(time(0))); // çàïóñêàåì ãåíåðàòîð ñëó÷àéíûõ ÷èñåë
		guess = rand() % x + 1; //ñëó÷àéíîå ÷èñëî â äèàïàçîíå îò 1 äî 100
		if (guess > secretNumber)
		{
			cout << "Òîî high!\n\n";
			x = guess;
		}
		else if (guess < secretNumber)
		{
			cout << "Òîî low!\n\n";
		}
		else
		{
			cout << "\nThat's it! You got it in " << tries << " guesses!\n";
		}
	} while (guess != secretNumber);

	return 0;

}
