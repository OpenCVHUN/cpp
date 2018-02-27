#include <iostream>

using namespace std;

int main() {
	int arr[] = {1, 2, 3, 4, 5, 6};
	int n = 0;
	int a = 3;
	for (int i = 0; i < 6; i++) {
		if (arr[i] % a != 0) {
			n++;
		}
	}
	cout << "The number is: " << n << endl;
	return 0;
}