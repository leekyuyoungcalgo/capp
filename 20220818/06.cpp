// ���ڿ��� ������ ��ȯ
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
			strcat(name, " ���ڰ� �ƴմϴ�.");
			throw name;
		}
}
void main() {
	try
	{
		const char* a = "123456";
		stringToInt(a);
		cout << a << " ==> ���ڷ� ��ȯ�� ����" << endl;

		a = "ȫ�浿";
		stringToInt(a);
		cout << a <<" ==> ���ڷ� ��ȯ�� ����"<<endl;

	}
	catch (const char* s)
	{
		cout << s << endl;
	}

}