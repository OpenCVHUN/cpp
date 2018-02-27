#include <iostream>

using namespace std;

int main() {
	double n;
	double sum = 0;
	cout << "Enter numbers" << endl;
	while (cin >> n) {
		sum += n;
	}
	cout << "Sum of the numbers is: " << sum << endl;
	return 0;
}