//2. Number Guessing Game
//o Write a C++ program that asks the user to guess a number between 1 and 100. The
//program should provide hints if the guess is too high or too low. Use loops to allow
//the user multiple attempts.
//o Objective: Understand while loops and conditional logic

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    
    int secretNumber = rand() % 100 + 1; 
    int guess;
    int attempts = 0;

    cout << "Guess the number (between 1 and 100):\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > secretNumber) {
            cout << "Too high! Try again.\n";
        } 
        else if (guess < secretNumber) {
            cout << "Too low! Try again.\n";
        } 
        else {
            cout << " Congratulations! You guessed the number in " << attempts << " attempts.\n";
        }

    } while (guess != secretNumber);

    return 0;
}

