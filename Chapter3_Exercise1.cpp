#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	enum fields {WORDS, HINT, NUM_FIELDS};
	const int NUM_WORDS = 5;
	const string WORD[NUM_WORDS][NUM_FIELDS] =
	{
		{"wall", "Do you feel you're banging your head against something?"},
		{"glasses", "These might help you see the answer."},
		{"labored", "Going slowly. is it?"},
		{"persistent", " еер at it."},
		{"jumbe", "It's what the game is all about."}
	};

	srand(static_cast<unsigned int>(time(0)));
	int choice = (rand() % NUM_WORDS);
	string theWord = WORD[choice][WORDS];
	string theHint = WORD[choice][HINT];

	string jumble = theWord;
	int length = jumble.size();
	for (int i = 0; i < length; ++i) {
		int index1 = (rand() % length);
		int index2 = (rand() % length);
		char temp = jumble[index1];
		jumble[index1] = jumble[index2];
		jumble[index2] = temp;
	}

	cout << "\t\t\tWelcome to Word Jumble!\n\n";
	cout << "Unscramble the letters to make а word.\n";
	cout << "Enter 'hint' for а hint.\n";
	cout << "Enter 'quit' to quit the game.\n\n";
	cout << "The jumble is: " << jumble;
	string guess;
	cout << "\n\nYour guess: ";
	cin >> guess;
	int using_hint = 0;

	while ((guess != theWord) && (guess != "quit"))
	{
		if (guess == "hint")
		{
			cout << theHint;
			++using_hint;
		}
		else
		{
			cout << "Sorry, thet's not it.";
		}
		cout << "\n\nYou guess: ";
		
		cin >> guess;
	}
	
	if (guess == theWord)
	{
		cout << "\nThans it! You guessed it! Your score is " << (theWord.size() - using_hint) << " points.\n";

	}
	cout << "\nThanks for playinf.\n";
	return 0;


}