/*
    This C++ program demonstrates various types of loops and loop control statements.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(nullptr)); // Seed for random number generation

    // Example of a for loop: Generating random numbers
    cout << "Generating 5 random numbers between 1 and 100:\n";
    for (int i = 0; i < 5; ++i) {
        cout << rand() % 100 + 1 << " ";
    }
    cout << endl << endl;

    // Example of a while loop: Simulating a player's health regeneration
    int playerHealth = 50;
    cout << "Simulating player health regeneration:\n";
    while (playerHealth < 100) {
        playerHealth += 10; // Increment health by 10
        cout << "Player health increased to " << playerHealth << endl;
    }
    cout << endl;

    // Example of a do-while loop: Asking the player for input until they choose to exit
    char choice;
    do {
        cout << "Do you want to play again? (Y/N): ";
        cin >> choice;
    } while (toupper(choice) != 'N');
    cout << endl;

    // Example of nested loops: Generating a simple 3x3 grid
    cout << "Generating a simple 3x3 grid:\n";
    for (int row = 0; row < 3; ++row) {
        for (int col = 0; col < 3; ++col) {
            cout << "(" << row << "," << col << ") ";
        }
        cout << endl;
    }
    cout << endl;

    // Example of loop control statements: Demonstrating break and continue
    cout << "Demonstrating loop control statements:\n";
    for (int i = 1; i <= 10; ++i) {
        if (i == 5) {
            cout << "Encountered 5. Breaking the loop.\n";
            break; // Exit the loop prematurely
        }
        if (i % 2 == 0) {
            cout << i << " is even. Skipping to next iteration.\n";
            continue; // Skip the remaining code in this iteration
        }
        cout << "Iteration " << i << endl;
    }
    cout << "End of loop.\n";

    return 0;
}
