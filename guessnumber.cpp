#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

int main() {
    int a, b, i = 1, j = 0, l, h;

    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));
    while (i) {
        cout << "Enter the lower limit of the range of numbers you want to guess from:" << endl;
        cin >> l;
        cout << "Enter the upper limit of the range (inclusive) of numbers you want to guess from:" << endl;
        cin >> h;

        // Generate a random number within the specified range
        a = l + (rand() % (h - l + 1));
        j = 0; // Reset the j flag for a new round
        while (!j) {
            cout << "Guess the number:" << endl;
            cin >> b; // Get the user's guess

            if (a == b) {
                cout << "You guessed the right number!" << endl;
                j = 1; // Mark the guess as correct
            } else {
                cout << "Incorrect value." << endl;
                if (a < b) {
                    cout << "The number you entered is greater than the correct answer." << endl;
                } else {
                    cout << "The number you guessed is smaller than the correct answer." << endl;
                }
                cout << "Try again or change the number? Enter 0 to try again or 1 to change:" << endl;
                cin >> j; // Allow the user to continue guessing or change the number
            }
        }

        cout << "Play again? Enter 1 for yes, or 0 to exit:" << endl;
        cin >> i; // Ask the user if they want to play again
    }

    return 0;
}

