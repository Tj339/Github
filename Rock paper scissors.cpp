#include "std_lib_facilities.h"
#include <ctime>
int main() {
	string rps;
	cout << "Enter your choice:\n";
	cin >> rps;
	srand(time(NULL));
	int value = (rand() % 10);
	if (value <= 3)
		cout << "\nRock\n";
	else if (value <= 6)
		cout << "\nPaper\n";
	else if (value <= 9)
		cout << "\nScissors\n";
	if (rps == "rock" and value <= 3)
		cout << "\nIT'S A DRAW\n";
	else if (rps == "rock" and value <= 6)
		cout << "\nYOU LOSE\n";
	else if (rps == "rock" and value <= 9)
		cout << "\nYOU WIN\n";
	else if (rps == "paper" and value <= 3)
		cout << "\nYOU WIN\n";
	else if (rps == "paper" and value <= 6)
		cout << "\nIT'S A DRAW\n";
	else if (rps == "paper" and value <= 9)
		cout << "\nYOU LOSE\n";
	else if (rps == "scissors" and value <= 3)
		cout << "\nYOU LOSE\n";
	else if (rps == "scissors" and value <= 6)
		cout << "\nYOU WIN\n";
	else if (rps == "scissors" and value <= 9)
		cout << "\nIT'S A DRAW\n";

}