#include <iostream>
#include <string>

using namespace std;

int main() {
	cout << "Irj valamit!" << endl;
	string a;
	cin >> a;
	for (int i = 0; i < a.size(); ++i) {
		if (a[i] == 'r') {
			a[i] = 'l';
		}

		else if (a[i] == 'R') {
			a[i] = 'L';
		}
	}
	cout << a;
}