#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void guessingGame() {
       srand(time(0));  
    int random_number = rand() % 100 + 1;

    int guess;

    cout << "Welcome to the Random Number Guessing Game!" << endl;
    cout << "I'm thinking of a number between 1 and 100." << endl;

    while (true) {
            cout << "Enter your guess: ";
        cin >> guess;

         if (guess < random_number) {
            cout << "Too low, try again." << endl;
        }
        else if (guess > random_number) {
            cout << "Too high, try again." << endl;
        }
        else {
            cout << "Congratulations! You guessed the correct number." << endl;
            break; 
        }
    }
}

int main() {
    guessingGame();
    return 0;
}
