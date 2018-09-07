#include <iostream>

using namespace std;

int main() {
	int a = 2;
	if (a < 2) {
		cout << "The number has to be grater than 2" << endl;
		return -1;
	}

	bool prime = true;

	for (int i = 2; i*i <= a; i++) {
		if (a % i == 0) {
			prime = false;
		}
	}
	if (prime) {
		cout << a << " is a prime number" << endl;
	}
	else {
		cout << a << " is not a prime number" << endl;
	}

	return 0;
}