#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <iomanip>

using namespace std;

bool continue1 = true, loop = true;

string randomWord();
bool completeWord(string word, string guess);
string userInput();
bool validateInput();
void setScreen(int num);

#endif