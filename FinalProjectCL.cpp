#include "header.h"
#include "functions.h"

int main() {
    cout << " _ \n| |\n| |__   __ _ _ __   __ _ _ __ ___   __ _ _ __\n| '_ \  / _` | '_ \  / _` | '_ ` _ \  / _` | '_ \ \n| | | | (_| | | | | (_| | | | | | | (_| | | | |\n|_| |_|\ __,_|_| |_|\ __, |_| |_| |_|\ __,_|_| |_|\n                    __/ |\n                   |___ / \n" << endl;
    //https://ascii.co.uk/art/hangman gave me a template
    cout << "enter 1 to begin!" << endl;
    int cheese = _getch();

    bool continue1 = true;
    do {
        //innitialize all the variables and get a random word
        int numArrow = 1, body = 0;
        bool completeWord1 = false, guesstf;
        string word = "cheese", input, guessWord, arrowCut, word2 = "";
        word = randomWord();
        char guess;

        //show empty gallows
        setScreen(0);

        cout << word;

        while (loop == true) {

            //checks to see if the word is complete
            completeWord1 = completeWord(word, word2);
            //there is a problem with parameters
            //now its something about the string beign out of range


        //if the word is fully guessed then end this round
            if (completeWord1 == true) {
                //add to the arrow count
                numArrow++;

                cout << "that was the correct word, good job" << endl << "do you want to play again? (y/n)" << endl;
                std::cin >> input;

                if (input == "n") {
                    continue1 = false;
                    word2 = "";
                }

                //show empty gallows
                setScreen(0);

                break;
            }



            //create another string/array and set it to empty
            word2 = word;
            for (int i = 0; i < word2.size(); i++) {
                word2[0] = '-';
            }

            //takes a guess and sets 'guess' to that
            cout << "enter a letter to guess it" << endl << endl;
            char temporary;
            cin >> temporary;
            guess = temporary;
            //iostream needs to cleared

            //checks validity of guess and sets screen to blank
            guesstf = validateInput(word, word2, guess);



            //adds to the body count if false
            if (guesstf == false) {
                body++;
            }

            //if body count is full then program ends
            if (body == 6) {
                cout << "incorrect and you killed him" << endl;
                break;
            }

            //sets the screen for the hangman depending on body
            if (guesstf == false) {

                cout << endl << "incorrect" << endl;
                switch (body) {
                case 1:
                    setScreen(1);
                    break;
                case 2:
                    setScreen(2);
                    break;
                case 3:
                    setScreen(3);
                    break;
                case 4:
                    setScreen(4);
                    break;
                case 5:
                    setScreen(5);
                    break;
                case 6:
                    setScreen(6);
                    break;
                }

                if (body != 0) {
                    //checks to see if we need to remove from body
                    cout << "do you want to cut a rope and get a limb back? (y/n)" << endl << "you have " << numArrow << " arrows left" << endl;
                    cin >> arrowCut;

                    //removes from body and prints new screen
                    if (arrowCut == "y" && body != 0 && numArrow > 0) {
                        setScreen(body - 1);
                        body--;
                        numArrow--;
                    }
                    else {
                        cout << endl << "too bad" << endl << endl;
                    }
                    arrowCut = "";
                }
            }
        }
    } while (continue1 == true);
}