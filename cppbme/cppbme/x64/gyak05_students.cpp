#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct student {
	string last;
	string first;
	int birthYear;
};

int main() {
	vector<struct student> students(3);
	students[0] = { "Hallgato", "Balint", 1996 };
	students[1] = { "Kiss", "Reka", 1995 };
	students[2] = { "Nagy", "Zsolt", 1997 };
	for (int i = 0; i < students.size(); i++) {
		cout << students[i].birthYear << endl;
	}
	cout << students[1].first << endl;
	return 0;
}