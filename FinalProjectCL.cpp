#include "header.h"
#include "functions.h"

int main()
{
    do {
        int numArrow = 1, body = 0;
        bool completeWord1 = false, guesstf;
        string word = randomWord(), input, guessWord, arrowCut;
        char guess;

        while (loop == true) {

            completeWord1 = completeWord(word, guessWord);

            if (completeWord1 == true) {

                cout << "that was the correct word, good job" << endl << "do you want to play again? (y/n)" << endl;
                cin >> input;

                numArrow++;
                if (input == "n") {
                    continue1 = false;
                }
                break;
            }

            cout << "enter a letter to guess it" << endl;
            char temporary;
            cin >> temporary;
            guess = temporary;

            guesstf = validateInput(word, guessWord, guess);
            setScreen(0);

            if (guesstf == false) {
                body++;
            }

            if (body == 6) {
                cout << "incorrect and you killed him" << endl;
                break;
            }

            if (guesstf == false) {

                cout << "incorrect";
                switch (body) {
                case 1:
                    setScreen(1);
                case 2:
                    setScreen(2);
                case 3:
                    setScreen(3);
                case 4:
                    setScreen(4);
                case 5:
                    setScreen(5);
                case 6:
                    setScreen(6);
                }

                cout << "do you want to cut a rope and get a limb back? (y/n)" << endl;
                cin >> arrowCut;

                if (arrowCut == "y" && body != 0) {
                    setScreen(body - 1);
                    body--;
                }
            }
        }
    } while (continue1 == true);
}