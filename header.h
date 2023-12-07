#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <fstream>

using namespace std;

bool continue1 = true, loop = true;

string randomWord();
bool completeWord(string word, string guess);
string userInput(string word);
bool validateInput();
void setScreen(int num);

#endif