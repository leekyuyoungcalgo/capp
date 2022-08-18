#include<iostream>
using namespace std;
bool getExp(int base, int exp, int &ret) {
	if (base <= 0 || exp <= 0)
		return false;

	int result = 1;
	for (size_t i = 0; i < exp; i++)	
		result *= base;
	ret = result;
	return true;	
}
void main() {
	int result = 0;
	getExp(2, -3, result) ? cout << result << endl : cout << "계산할 수 없습니다.";	
}