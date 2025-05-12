 
#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;


//cpp random changes


int main() {
    srand(time(0));  // Seed for random number generation
    int secretNumber = rand() % 100 + 1;  // Random number between 1 and 100
    int guess, attempts = 0;

    cout << "🎯 Welcome to the Number Guessing Game! 🎯\n";
    cout << "I have picked a number between 1 and 100. Can you guess it?\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > secretNumber) {
            cout << "Too high! Try again.\n";
        } else if (guess < secretNumber) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "🎉 Congratulations! You guessed the number in " << attempts << " attempts!\n";
        }
    } while (guess != secretNumber);

    return 0;
}