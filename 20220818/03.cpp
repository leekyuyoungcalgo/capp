#include<iostream>
#include<string>
using namespace std;
int divide(int x, int y) {
	if (y <= 0)
		throw "������ �Ұ��� �մϴ�.";
	return x / y;
}
void main() {

	try
	{		
		cout << "������� : " << divide(10, 0);
	}
	catch (const char* s)
	{
		cout << s << endl;
	}

}