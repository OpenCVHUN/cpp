#include <iostream>

using namespace std;


int main() {
	cout << "Gondolj egy szamra 1 es 128 kozott!\nA kerdesekre az i(igen)/n(nem) billentyukkel tudsz valaszolni.\n" << endl;
	int a = 0;
	int f = 128;
	int tipp;
	char c;
	int i = 0;
	int t[7];
	do {
		tipp = (a + f) / 2;

		for (int j = 0; j < 8; j++) {
			if (tipp == t[j]) {
				cout << "A keresett szam: " << tipp << ", ezt " << i << " lepesben talaltam meg :)" << endl;
				return 0;
			}
		}
		t[i] = tipp;
		cout << "Kisebb a szam, mint " << tipp << " ?" << endl;
		cin >> c;

		if (c == 'i') {
			f = tipp;
		}
		else a = tipp;
		i++;
	} while (c == 'i' || c == 'n');
	cout << "Kitalaltam " << i << " lepesben :)";
	
	return 0;
}