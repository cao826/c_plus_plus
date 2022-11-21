#include <iostream>
#include <cmath>

using namespace std;

void sayHi(string name, int age);


int main()
{
    int secretNumber = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;
    while (guess != secretNumber && !outOfGuesses){
        if (guessCount < guessLimit) {
            cout << "Enter a guess: ";
            cin >> guess;
            guessCount++;
        } else {
            outOfGuesses = true;
        }
    }
    if (outOfGuesses) {
        cout << "You lost the game";
    } else {
        cout << "You guessed correctly!";
    }
    return 0;
}

