//Jake Hall
//Program 1
//jrhtyd@mail.umkc.edu
//August 28th, 2019

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int compRoll() {
	int compDiceRoll;
	int computerScore;
	computerScore = 0;
	srand(time(0));
	while (computerScore < 20) {
		compDiceRoll = rand() % 6 + 1;
		if (compDiceRoll != 1) {
			computerScore = computerScore + compDiceRoll;
			cout << "Die Roll : " << compDiceRoll << " Pot: " << computerScore << endl;
		

		}
		else {
			cout << "Die Roll : " << compDiceRoll << " Pot: Bust" << endl;
			return computerScore = 0;
			break;
		
		}
	}

	return computerScore;
}

int gamePlay(){
	string input;
	string aiTurn;
	int userScore;
	int computerScore;
	int compDiceRoll;
	int userDiceRoll;
	int x;
	userScore = 0;
	computerScore = 0;
	srand(time(0));
	cout << "Total score Player: " << userScore << "     AI: " << computerScore << endl;
	while (userScore < 50 && computerScore < 50) {
		cout << " " << endl;
		cout << "Player's Turn" << endl;
		userDiceRoll = rand() % 6 + 1;
		if (userDiceRoll != 1) {
			userScore = userScore + userDiceRoll;
			cout << "Die Roll: " << userDiceRoll << " Pot: " << userScore << "     (R)oll again or (H)old? ";
			cin >> input;
			if (input == "R" || input == "r") {
				continue;

			}
			else if (input == "H" || input == "h") {
				cout << " " << endl;
				cout << "AI Turn" << endl;
				cout << " Type enter to continue>> ";
				cin >> aiTurn;
				x = compRoll();
				if (x == 0) {
					computerScore = 0;
				}
				else {
					computerScore = computerScore + x;
				}
				cout << "Total score Player: " << userScore << "     AI: " << computerScore << endl;
				cout << " " << endl;

				continue;
			}
			else {
				cout << "You must enter R or H" << endl;
			}
		}
		else {
			userScore = 0;
			cout << "Die Roll: " << userDiceRoll << " Pot: " << "Bust" << endl;
			cout << " " << endl;
			cout << "AI Turn" << endl;
			cout << " Type any character to continue>> ";
			cin >> aiTurn;
			x = compRoll();
			computerScore = computerScore + x;
			if (x == 0) {
				computerScore = 0;
			}
			else {
				computerScore = computerScore + x;
			}
			cout << "Total score Player: " << userScore << "     AI: " << computerScore << endl;
			cout << " " << endl;
			continue;
		}

	}
	if (computerScore >= 50) {
		cout << "The computer wins" << endl;
		cout << " ";
	}
	else if (userScore >= 50) {
		cout << "You win!" << endl;
		cout << " ";
	}
	return 0;
}

int gameOver() {
	int endgame;
	string userInput;
	endgame = 0;
	while (endgame != 1) {

		cout << "Do you want to play again Y or N >> ";
		cin >> userInput;
		if (userInput == "Y" || userInput == "y") {
			gamePlay();
		}
		else if (userInput == "N" || userInput == "n") {
			endgame = 1;

		}
		else {
			cout << "Invalid Input" << endl;
		}


	}

	return 0;
}

int main() {
	gamePlay();

	gameOver();


	return 0;

}

