// 문자열을 정수로 변환
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;
void stringToInt(const char x[]) {
	int length = strlen(x);
	char* name = (char*)calloc(length+10, sizeof(char));
	strcpy(name, x);
	for (size_t i = 0; i < length; i++)	
		if (x[i] < '0' || x[i] > '9') {
			strcat(name, " 숫자가 아닙니다.");
			throw name;
		}
}
void main() {
	try
	{
		const char* a = "123456";
		stringToInt(a);
		cout << a << " ==> 숫자로 변환이 가능" << endl;

		a = "홍길동";
		stringToInt(a);
		cout << a <<" ==> 숫자로 변환이 가능"<<endl;

	}
	catch (const char* s)
	{
		cout << s << endl;
	}

}