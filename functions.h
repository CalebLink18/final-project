#include "header.h"

string randomWord() {
	ifstream inputFile;

	int temp = 0;
	for (int i = 0; !inputFile.eof(); i++) {
		temp++;
	}

	srand(time(0));
	int random = rand() % temp;

	int i = 0;
	string line;
	while (!inputFile.eof()) {
		getline(inputFile, line);
		if (i == temp) {
			break;
		}
		i++;
	}
}

bool completeWord(string word, string guess) {

}

string userInput(string word) {

}

bool validateInput(string word, string& word2, char guess) {


	/*for (int i = 0; i <= word.size(); i++) {
		if (guess == word[i]) {

			return true;
		}
	}*/
}

void setScreen(int num) {}