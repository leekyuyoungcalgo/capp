#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int checkNumber(string number) {
	for (auto s : number) {				
		if (s < '0' || s >'9')
			throw "not a number";
	}
	return stoi(number);
}

void main() {
	string number;
	cout << "input data : ";
	cin >> number;
	try
	{
		int data = 	checkNumber(number);
	}
	catch (const char* s)
	{
		cout << s << endl;
	}
	
	
}
