#include<iostream>
using namespace std;
int getExp(int base, int exp) {
	if (base <= 0 || exp <= 0)
		throw "음수사용 불가";
	int value = 1;
	for (size_t i = 0; i < exp; i++)
		value *= base;
	return value;
}

void main() {
	int v = 0;
	try
	{
		v = getExp(2, 3);
		cout << v << endl;

		v = getExp(2, -3);
		cout << v << endl;
	}
	catch (const char* s)
	{
		cout << s << endl;
	}
}