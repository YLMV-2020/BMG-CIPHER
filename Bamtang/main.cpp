#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

struct Data
{
	char letter;
	int count;
};



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string message = "Bgc-bfufb tegaedppqna ql aggv zge xof tegaedppfe'l lgjb.\n";
	message += "Xof adpf vflqanfe logjbvn'x hf pdwqna d cgebv qn coqro xof tbdkfe ql mjlx d lpdbb tdex. Xof tbdkfe QL XOF HGLL;\n";
	message += "qx'l kgje vjxk xg fnxfexdqn oqp ge ofe.\n";
	message += "Zgrjl ql d pdxxfe gz vfrqvqna codx xoqnal kgj def ngx agqna xg vg.\n";
	message += "Xof rglx gz dvvqna d zfdxjef qln'x mjlx xof xqpf qx xdwfl xg rgvf qx. Xof rglx dblg qnrbjvfl xof dvvqxqgn gz dn\n";
	message += "ghlxdrbf xg zjxjef fstdnlqgn. Xof xeqrw ql xg tqrw xof zfdxjefl xodx vgn'x zqaox fdro gxofe. - Mgon Rdepdrw.\n";
	message += "(ccc.adpdljxed.rgp/uqfc/nfcl/234346?utkjpvbjr)\n";
	message += "(ccc.hedqnkijgxf.rgp/ijgxfl/djxogel/m/mgon_rdepdrw.oxpb)\n";

	string freqLang = "TEOAISRHNUCMDLGWFPYKJBVQX";

	map<char, int> myMap;
	map<char, char> myMapDecrypt;

	for (int i = 0; i < message.size(); i++)
	{
		if (message[i] >= 'a' && message[i] <= 'z')
			myMap[message[i]]++;
		else if (message[i] >= 'A' && message[i] <= 'Z')
			myMap[message[i] + 32]++;
	}

	vector<Data> data;

	for (auto it = myMap.begin(); it != myMap.end(); it++)
	{
		Data newData;
		newData.letter = it->first;
		newData.count = it->second;

		data.push_back(newData);
	}

	sort(data.begin(), data.end(), [](Data a, Data b) {
		return a.count > b.count;
		});

	for (int i = 0; i < data.size(); i++)
	{
		myMapDecrypt[data[i].letter] = freqLang[i] + 32;
	}

	for (int i = 0; i < message.size(); i++)
	{
		if (message[i] >= 'a' && message[i] <= 'z')
			cout << myMapDecrypt[message[i]];
		else if (message[i] >= 'A' && message[i] <= 'Z')
			cout << char(myMapDecrypt[message[i] + 32] - 32);
		else
			cout << message[i];
	}

	return 0;
}

