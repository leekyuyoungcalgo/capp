#include<iostream>
#include<string>
using namespace std;
int divide(int x, int y) {
	if (y <= 0)
		throw "음수는 불가능 합니다.";
	return x / y;
}
void main() {

	try
	{		
		cout << "나누기는 : " << divide(10, 0);
	}
	catch (const char* s)
	{
		cout << s << endl;
	}

}