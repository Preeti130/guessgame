#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(NULL)));
    int number = (rand() % 100) + 1;  // Generate a random number between 1 and 100
    int guess = 0;
    int attempts = 0;
    const int maxAttempts = 5;

    cout << "Guess the number (1-100). You have " << maxAttempts << " attempts." << endl;

    while (attempts < maxAttempts) {
        cout << "Enter guess (1-100): ";
        cin >> guess;

        if (guess > number) {
            cout << "Guess lower!" << endl;
        } else if (guess < number) {
            cout << "Guess higher!" << endl;
        } else {
            cout << "You won! The number was " << number << "." << endl;
            break;
        }
        attempts++;
    }

    if (attempts == maxAttempts && guess != number) {
        cout << "Sorry, you've used all your attempts. The number was " << number << "." << endl;
    }

    return 0;
}