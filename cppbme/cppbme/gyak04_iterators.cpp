//Szovtferfejlesztés C++ nyelven 266. 

#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> intVector;
	intVector.reserve(2);
	
	intVector.push_back(1);
	intVector.push_back(2);

	for (vector<int>::iterator it = intVector.begin(); it != intVector.end(); ++it) {
		cout << *it << endl;
	}
	return 0;
}