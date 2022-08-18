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

int g(int x, int y) {
	return x - y;
}

