#include "header.h"

string randomWord() {
	ifstream inputFile;
	inputFile.open("TextFile1.txt");

	string cheese;
	int temp = 0;
	for (int i = 0; !inputFile.eof(); i++) {
		inputFile >> cheese;
		temp++;
	}
	inputFile.close();
	inputFile.open("TextFile1.txt");

	srand(time(0));
	int random = 1 + rand() % 100;

	string line;
	for (int i = 1; !inputFile.eof(); i++) {
		inputFile >> line;
		inputFile >> line;
		if (i == random) {
			break;
		}
	}
	inputFile.close();
	return line;
}

bool completeWord(string word, string& word2) {
	bool TF = false;
	int temp = 1;
	cout << temp;
	for (int i = 0; word2[i] != '-'; i++) {
		temp++;
		cout << temp;
	}
	if (temp == word.size()) {
		TF = true;
		cout << "flag";
	}
	return TF;
}

bool validateInput(string word, string& word2, char guess) {
	bool YN = false;
	for (int i = 0; i <= word.size(); i++) {
		if (word[i] == guess) {
			word2[i] = guess;
			YN = true;
		}
	}
	if (YN == true) {
		cout << "correct" << endl;
	}
	return YN;
}

void setScreen(int num) {
	switch (num) {
	case 0:
		//system("cls");
		cout << "___________________________\n";
		cout << "H\n" << "H\n" << "H\n" << "H\n" << "H\n" << "H\n" << "H\n" << "H\n";
		cout << "===========================\n";
		cout << endl << endl << endl;
		break;

	case 1:
		cout << "___________________________\n";
		cout << "H               |\n";
		cout << "H               o\n";
		cout << "H\n";
		cout << "H\n";
		cout << "H\n";
		cout << "H\n";
		cout << "H\n";
		cout << "H\n";
		cout << "===========================\n";
		cout << endl << endl << endl;
		break;

	case 2:
		cout << "___________________________\n";
		cout << "H               |\n";
		cout << "H               o\n";
		cout << "H              [0]\n";
		cout << "H\n";
		cout << "H\n";
		cout << "H\n";
		cout << "H\n";
		cout << "H\n";
		cout << "===========================\n";
		cout << endl << endl << endl;
		break;

	case 3:
		cout << "___________________________\n";
		cout << "H               |\n";
		cout << "H               o\n";
		cout << "H             |[0]\n";
		cout << "H\n";
		cout << "H\n";
		cout << "H\n";
		cout << "H\n";
		cout << "H\n";
		cout << "===========================\n";
		cout << endl << endl << endl;
		break;

	case 4:
		cout << "___________________________\n";
		cout << "H               |\n";
		cout << "H               o\n";
		cout << "H             |[0]|\n";
		cout << "H\n";
		cout << "H\n";
		cout << "H\n";
		cout << "H\n";
		cout << "H\n";
		cout << "===========================\n";
		cout << endl << endl << endl;
		break;

	case 5:
		cout << "___________________________\n";
		cout << "H               |\n";
		cout << "H               o\n";
		cout << "H             |[0]|\n";
		cout << "H              i\n";
		cout << "H\n";
		cout << "H\n";
		cout << "H\n";
		cout << "H\n";
		cout << "===========================\n";
		cout << endl << endl << endl;
		break;

	case 6:
		cout << "___________________________\n";
		cout << "H               |\n";
		cout << "H               o\n";
		cout << "H             |[0]|\n";
		cout << "H              i i\n";
		cout << "H\n";
		cout << "H\n";
		cout << "H\n";
		cout << "H\n";
		cout << "===========================\n";
		cout << endl << endl << endl;
		break;
	}
}