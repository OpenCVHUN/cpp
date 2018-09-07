#include <iostream>

using namespace std;



struct Player {
	double x;
	double y;
};

enum direction { LEFT, RIGHT, UP, DOWN };

int main() {
	Player p;
	p.x = 0;
	p.y = 0;
	direction move = LEFT;
	switch (move) {
	case LEFT:
		p.x -= 1;
		break;
	case RIGHT:
		p.x += 1;
		break;
	case UP:
		p.y += 1;
		break;
	case DOWN:
		p.y -= 1;
		break;
	}
	cout << "x: " << p.x << " y: " << p.y << endl;
	return 0;
}