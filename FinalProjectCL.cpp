#include "header.h"
#include "functions.h"

int main()
{
    do {
        //innitialize all the variables and get a random word
        int numArrow = 1, body = 0;
        bool completeWord1 = false, guesstf;
        string word = randomWord(), input, guessWord, arrowCut;
        char guess;

        while (loop == true) {

            //checks to see if the word is complete
            completeWord1 = completeWord(word, guessWord);


            //create two arrays, one that is a copy of word but in an array and one that is a match for that but boolean
            //stringArray[i] = new char[word[i]];

            //get length or word/word array
            int tempArray = 0;
            for (int i = 0; i < word.size(); i++) {
                tempArray++;
            }

            bool boolArray[1];
            for (int i = 0; i < word.size(); i++) {
                boolArray[i] = new bool[false];
            }


            //if the word is fully guessed then end this round
            if (completeWord1 == true) {
                cout << "that was the correct word, good job" << endl << "do you want to play again? (y/n)" << endl;
                cin >> input;

                //add to the arrow count
                numArrow++;
                if (input == "n") {
                    continue1 = false;
                }
                break;
            }

            //takes a guess and sets 'guess' to that
            cout << "enter a letter to guess it" << endl;
            char temporary;
            cin >> temporary;
            guess = temporary;

            //checks validity of guess and sets screen to blank
            guesstf = validateInput(word, guessWord, guess);
            setScreen(0);

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

                //checks to see if we need to remove from body
                cout << "do you want to cut a rope and get a limb back? (y/n)" << endl;
                cin >> arrowCut;

                //removes from body and prints new screen
                if (arrowCut == "y" && body != 0) {
                    setScreen(body - 1);
                    body--;
                }
            }
        }
    } while (continue1 == true);
}