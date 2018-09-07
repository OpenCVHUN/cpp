#include <iostream>

using namespace std;

class Osztaly {
public:
	Osztaly() {
		cout << "Constructor" << endl;
	};
	~Osztaly() {
		cout << "Destructor" << endl;
	};
private:
	int itsAge;
};

int main() {
	cout << "Osztaly letrehozasa a stack-en" << endl;
	Osztaly stack;
	cout << "Osztaly letrehozasa a heap-en" << endl;
	Osztaly* heap = new Osztaly;
	cout << "Osztaly torlese a heap-rol" << endl;
	delete heap;
	cout << "Program vege" << endl;
	return 0;
}