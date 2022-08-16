// 배열을 복사하는 generic 함수 mcopy()
#include<iostream>
using namespace std;

template<class T1, class T2>
void mcopy(T1 src[], T2 dest[], int length) {
	for (size_t i = 0; i < length; i++)	
		dest[i] = src[i];	
}

template<class T>
void print(T array[], int length) {
	for (size_t i = 0; i < length; i++)
	{		
		cout << array[i] << "\t";
	}
	cout << endl;
}
// 템플릿함수 print에 대한 overload
void print(char array[], int length) {
	for (size_t i = 0; i < length; i++)
	{
		cout << (int)array[i] << "\t";
	}
	cout << endl;
}

void main() {
	int x[] = { 1,2,3,4,5 };
	double d[5] = {1.1,2.2,3.3,4.4,5.5};
	char c[5] = { 1,2,3,4,5 }, e[5];
	
	for (size_t i = 0; i < 5; i++)
	{
		cout << (int)c[i] << " ";
	}
	cout << endl;


	print(x, 5);
	print(d, 5);
	print(c, 5);

	
	/*mcopy(x, d, 5);
	mcopy(c, e, 5);
	for (size_t i = 0; i < 5; i++)
	{
		cout << d[i] << " , " << e[i] << endl;
	}*/

}