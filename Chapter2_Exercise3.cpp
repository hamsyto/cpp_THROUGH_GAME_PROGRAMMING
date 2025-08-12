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
	cout << "\tWelcome to Guess �� Number\n\n";

	cout << "Enter � secretNumber 0 - 100: ";
	cin >> secretNumber;

	do
	{
		++tries;
		srand(static_cast<unsigned int>(time(0))); // ��������� ��������� ��������� �����
		guess = rand() % x + 1; //��������� ����� � ��������� �� 1 �� 100
		if (guess > secretNumber)
		{
			cout << "��� high!\n\n";
			x = guess;
		}
		else if (guess < secretNumber)
		{
			cout << "��� low!\n\n";
		}
		else
		{
			cout << "\nThat's it! You got it in " << tries << " guesses!\n";
		}
	} while (guess != secretNumber);

	return 0;
}