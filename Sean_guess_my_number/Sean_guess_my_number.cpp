// Sean_guess_my_number.cpp : Defines the entry point for the console application.
//number guessing game

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	//random seed generator
	srand(static_cast<unsigned int>(time(0))); 
	
	//random number between 1 and 100
	int secretNumber = rand() % 100 + 1;
	int tries = 0;
	int guess;
	cout << "tWelcome to Guess My Number\n\n";

	//create the game loop
	do
	{
		cout << "Enter a guess: ";
		cin >> guess;
		++tries;

		if (guess > secretNumber)
		{
			cout << "Too High!\n\n";
		}
		else if (guess < secretNumber)
		{
			cout << "Too Low!\n\n";
		}
		else
		{
			cout << "\nThat's it! You got it in " << tries << " guesses!\n";
		}
	} while (guess != secretNumber);

    return 0;
}

