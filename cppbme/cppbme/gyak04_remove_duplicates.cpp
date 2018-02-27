#include <iostream>
#include <vector>

using namespace std;

int main() {
	/*int src[] = { 1,1,1,3,3,3,3,5 };
	//cout << src[8] << endl;
	int dst[8];
	dst[0] = src[0];
	short j = 0;
	for (short i = 1; i < 8; i++) {
		if (src[i] != dst[j]) {
			dst[j + 1] = src[i];
			j++;
		}
	}

	for (int i = 0; i <= j; i++) {
		cout << dst[i] << endl;
	}*/

	vector<int> src = { 1,1,1,3,3,3,3,5 };
	vector<int> dst(1);
	//cout << src[8] << endl;
	dst.at(0) = src.at(0);
	short j = 0;
	for (short i = 1; i < src.size(); i++) {
		if (src.at(i) != dst.at(j)) {
			dst.push_back(src.at(i));
			j++;
		}
	}

	for (int i = 0; i <= j; i++) {
		cout << dst.at(i) << endl;
	}
	 
	
	return 0;
}