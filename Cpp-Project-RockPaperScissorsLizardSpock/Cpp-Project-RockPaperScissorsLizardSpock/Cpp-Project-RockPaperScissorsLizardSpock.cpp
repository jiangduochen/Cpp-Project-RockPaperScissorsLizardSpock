// Cpp-Project-RockPaperScissorsLizardSpock.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	string user, computer, choice;
	int randNum;

	while (true)
	{
		//see random numbers
		srand(time(0));
		// computer makes a choice 
		randNum = rand() % 5;   // 0, 1, 2, 3, 4 possible values
		// covert to char
		if (randNum == 0)
			computer = "Rock";
		else if (randNum == 1)
			computer = "Paper";
		else if (randNum == 2)
			computer = "Scissors";
		else if (randNum == 3)
			computer = "Lizard";
		else
			computer = "Spock";

		cout << "Enter Rock, Paper, Scissors, Lizard, or Spock: ";
		cin >> user;

		// determine winner
		if (computer == "Rock") {    //rock
			if (user == "Rock")
				cout << "It's a tie!";
			else  if (user == "Paper")
				cout << "You win! Paper covers rock.";
			else if (user == "Scissors")
				cout << "You lose! Rock breaks scissors.";
			else if (user == "Lizard")
				cout << "You lose! Rock crushes lizard.";
			else
				cout << "You win! Spock vaporates rock.";
		}
		else if (computer == "Paper") { // paper 
			if (user == "Rock")
				cout << "You lose! Paper covers rock.";
			else  if (user == "Paper")
				cout << "It's a tie! ";
			else if (user == "Scissors")
				cout << "You win! Scissors cut paper.";
			else if (user == "Lizard")
				cout << "You win! Lizard eats paper.";
			else
				cout << "You lose! Paper disapproves Spock.";
		}
		else if (computer == "Scissors") { // scissors 
			if (user == "Rock")
				cout << "You win!Rock breaks scissors.";
			else  if (user == "Paper")
				cout << "You lose! Scissors cut paper. ";
			else if (user == "Scissors")
				cout << "It's a tie!";
			else if (user == "Lizard")
				cout << "You lose! Scissors decapitates lizard.";
			else
				cout << "You win! Spock smashes scissors.";
		}
		else if (computer == "Lizard") { // lizard 
			if (user == "Rock")
				cout << "You win! Rock crushes lizard.";
			else  if (user == "Paper")
				cout << "You lose! Lizard eats paper.";
			else if (user == "Scissors")
				cout << "You win! Scissors decapitates lizard.";
			else if (user == "Lizard")
				cout << "It's a tie!";
			else
				cout << "You lose! Lizard poisons Spock.";
		}
		else { // Spock 
			if (user == "Rock")
				cout << "You lose! Spock vaporates rock.";
			else  if (user == "Paper")
				cout << "You win! Paper disapproves Spock.";
			else if (user == "Scissors")
				cout << "You lose! Spock smashes scissors.";
			else if (user == "Lizard")
				cout << "You win! Lizard poisons Spock.";
			else
				cout << "It's a tie!";
		}

		cout << "\nEnter 1 to continue playing or anyother key to Exit.";
		cin >> choice;

		if (choice != "1") {
			return 0;
		}
	}

	return 0;

}
