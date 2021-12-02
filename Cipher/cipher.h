#include <iostream>
using namespace std;

#include <map>
#include <vector>
#include <algorithm>

struct Data
{
	char letter;
	int count;
	Data(char letter, int count) :letter(letter), count(count) {}
};

void decryptMessage(const string& message, const string& freqLang);