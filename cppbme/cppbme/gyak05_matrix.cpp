//http://www.cplusplus.com/forum/beginner/108606/
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n = 3;
	int m = 3;
	cout << "Enter " << n*m << " integers" << endl;
	vector<vector<int>> matrix(n,vector<int>(m));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> matrix[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << matrix[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}