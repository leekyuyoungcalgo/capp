#include<iostream>
using namespace std;
int g(int x, int y);

extern "C" int f(int x, int y);

void main() {
	int n1 = f(2, 5);
	cout << n1 << endl;
	int n2 = g(2, 5);
	cout << n2 << endl;
}
