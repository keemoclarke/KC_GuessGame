#include <iostream>
#include <cstdlib>  // for rand()
#include <ctime>

using namespace std;

int main(){

srand(time(0));  // to generate truly random numbers

int number = 1 + (rand() % 100);  // random number between [1,100]

int input;

cout << "\nGuess a number between 1 and 100: ";
cin >> input;

while (input !=number) {     // Keep asking until user gets correct number

	if (input > number){
		cout << " \n\nToo high. Try again: ";
		cin >> input;
	}

	else{
		cout << " \n\nToo low. Try again: ";
		cin >> input;
	}

}

	// exit loop when user enters input == number; 


cout << "\n\n\nCongrats! You're a winner!!!.\n\n";

	return 0;
}
