#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> intVector(10);
	intVector[4] = 3;
	cout << intVector[4] << endl;;

	/*intVector[12] = 100; NOT ALLOWED!!! */
	intVector.resize(15);
	intVector[12] = 100; //OK
	
	intVector.push_back(5);
	
	for (int i = 0; i < intVector.size(); i++) {
		cout << intVector[i] << endl;
	}

	int a = intVector.size(); //automatic conversion
	cout << "Number of elements: " << a << endl;
	cout << "Last element: " << intVector[a-1] << endl;
	return 0;
}