#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<double> v = { 1.2, 2.3, -5, 0, 4.6 };
	double maxi = v[0];
	int ind;
	for (int i = 1; i < v.size(); i++) {
		if (v[i] > maxi) {
			maxi = v[i];
			ind = i;
		}
	}
	cout << "Max value is: " << maxi << " , the index is: " << ind << endl;
	return 0;
}