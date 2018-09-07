#include <iostream>
#include <string>

using namespace std;

int main() {
	string a("Hello "), b("World"); 
	string c = a + b;
	cout << c << endl;

	c[0] = 'h';
	cout << c << endl;

	return 0;
}