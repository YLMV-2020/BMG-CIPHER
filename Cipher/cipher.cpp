#include "cipher.h"

void decryptMessage(const string& message, const string& freqLang)
{
	map<char, char> myMapDecrypt;
	vector<Data> data;

	int messajeSize = message.size();

	for (int i = 0; i < messajeSize; i++)
	{
		if (message[i] >= 'a' && message[i] <= 'z')
			myMapDecrypt[message[i]]++;
		else if (message[i] >= 'A' && message[i] <= 'Z')
			myMapDecrypt[message[i] + 32]++;
	}

	for (auto it = myMapDecrypt.begin(); it != myMapDecrypt.end(); it++) data.push_back(Data(it->first, it->second));

	sort(data.begin(), data.end(), [](Data a, Data b) {
		return a.count > b.count;
		});

	myMapDecrypt.clear();

	for (int i = 0; i < data.size(); i++) myMapDecrypt[data[i].letter] = freqLang[i] + 32;
	
	for (int i = 0; i < messajeSize; i++)
	{
		if (message[i] >= 'a' && message[i] <= 'z')
			cout << myMapDecrypt[message[i]];
		else if (message[i] >= 'A' && message[i] <= 'Z')
			cout << char(myMapDecrypt[message[i] + 32] - 32);
		else
			cout << message[i];
	}
}
