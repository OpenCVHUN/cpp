#include <iostream>

using namespace std;

int main() {
	//Típusok: int, double (lebegőpontos számábrázolás) és műveletek
	int a = 5;
	int b = 6;
	cout << "a+b: " << a + b << endl;
	cout << "a-b: " << a - b << endl;
	cout << "a*b: " << a * b << endl;
	cout << "a/b: " << a / b << endl;  //intek osztásának eredménye is int lesz
	cout << "a/b: " << double(a) / b << endl; //megoldás 1. --> explicit castolás
	cout << "a/b: " << 1.0 * a / b << endl; //megoldás 2.
	cout << "a/b: " << static_cast<double>(a) / b << endl; //hivatalos megoldás --> Cpp konverziós operátor
	cout << "b%a: " << b % a << endl;
	double c = 5;
	double d = 6;
	cout << "c/d: " << c / d << endl;
	double e = 0.1;
	cout << 3 * e << endl;
	//Logikai típus (bool):true/false, && || !
	cout << (3 * e == 0.3) << endl; //hamis, doublet nem használunk ellenőrzésre!
	bool f = true;
	bool g = false;
	cout << (f && g) << endl;
	//Hatványozás, gyökvonás, régen cmath
	cout << "3 power of 2: " << pow(3, 2) << endl;
	cout << "sqrt of 9: " << pow(9, 0.5) << endl;
	//Beolvasás cin-ről (olyan programot írjunk, ami kommunikál) --> mi van akkor, ha doublet írok, vagy egy betűt?
	cout << "Insert an integer!" << endl;
	int h;
	cin >> h;
	cout << h << endl;
	cout << "Insert a char!" << endl;
	char i; //char típus
	cin >> i;
	cout << i << endl;
	return 0;
}