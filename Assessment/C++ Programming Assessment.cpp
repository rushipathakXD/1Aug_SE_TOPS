#include <iostream>
#include <cstdlib>   
#include <ctime>     
using namespace std;

int getComputerChoice() {
    return rand() % 3 + 1; 
	}

void displayMenu() {
    cout << "\nMenu:\n";
    cout << "1. Rock\n";
    cout << "2. Paper\n";
    cout << "3. Scissors\n";
}

string findWinner(int userChoice, int compChoice) {
    if (userChoice == compChoice)
        return "It's a draw!";
    else if ((userChoice == 1 && compChoice == 3) ||
             (userChoice == 2 && compChoice == 1) ||
             (userChoice == 3 && compChoice == 2))
        return "You win this round!";
    else
        return "Computer wins this round!";
}

int main() {
    string playerName;
    int rounds;

    cout << "Enter your name: ";
    cin >> playerName;

    cout << "Enter number of rounds to play: ";
    cin >> rounds;

    srand(time(0)); 
    int userScore = 0, compScore = 0;

    for (int i = 1; i <= rounds; i++) {
        cout << "\n--- Round " << i << " ---\n";
        displayMenu();
        
        int userChoice;
        cout << "Enter your choice (1-3): ";
        cin >> userChoice;

        int compChoice = getComputerChoice();

        cout << playerName << " chose ";
        if (userChoice == 1) cout << "Rock";
        else if (userChoice == 2) cout << "Paper";
        else cout << "Scissors";

        cout << " | Computer chose ";
        if (compChoice == 1) cout << "Rock";
        else if (compChoice == 2) cout << "Paper";
        else cout << "Scissors";
        cout << endl;

        string result = findWinner(userChoice, compChoice);
        cout << result << endl;

        if (result.find("You win") != string::npos) userScore++;
        else if (result.find("Computer wins") != string::npos) compScore++;
    }

    cout << "\nFinal Score: " << playerName << " = " << userScore 
         << ", Computer = " << compScore << endl;

    if (userScore > compScore)
        cout << "Congratulations, " << playerName << "! You won the game!" << endl;
    else if (compScore > userScore)
        cout << "Computer wins the game. Better luck next time!" << endl;
    else
        cout << "The game is a tie!" << endl;

    return 0;
}

