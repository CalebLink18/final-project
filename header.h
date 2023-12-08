#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

bool continue1 = true, loop = true;

string randomWord();
bool completeWord(string word, string& word2);
bool validateInput(string word, string& word2, char guess);
void setScreen(int num);

#endif