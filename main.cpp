#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int secretNumber = rand() % 100 + 1;
    int guess;
    int guessesMade = 0;
    int guessCount = 0;

    do {
        cout << "Guess a number between 1 and 100: ";
        cin >> guess;
        guessesMade++;

        if (guess > secretNumber) {
            cout << "Too high, try again.\n";
        } else if (guess < secretNumber) {
            cout << "Too low, try again.\n";
        }
    } while (guess != secretNumber);

    while (guessCount < guessesMade) {
        guessCount++;
    }

    cout << "You guessed the number in " << guessCount << " guesses.\n";
    return 0;
}