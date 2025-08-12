#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	
	int tries = 0;
	int guess;
	int secretNumber;
	int x = 100, y = 1;
	cout << "\tWelcome to Guess Му Number\n\n";

	cout << "Enter а secretNumber 0 - 100: ";
	cin >> secretNumber;

	do
	{
		++tries;
		srand(static_cast<unsigned int>(time(0))); // запускаем генератор случайных чисел
		guess = rand() % x + 1; //случайное число в диапазоне от 1 до 100
		if (guess > secretNumber)
		{
			cout << "Тоо high!\n\n";
			x = guess;
		}
		else if (guess < secretNumber)
		{
			cout << "Тоо low!\n\n";
		}
		else
		{
			cout << "\nThat's it! You got it in " << tries << " guesses!\n";
		}
	} while (guess != secretNumber);

	return 0;
}