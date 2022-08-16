// �Լ��� �ߺ��� ����(����)
#include<iostream>
using namespace std;
//void swap(int &a, int &b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void swap(double &a, double &b) {
//	double temp = a;
//	a = b;
//	b = temp;
//}

// ���ø��� �����ϴ� Ű����
// ���ʸ� Ÿ���� �����ϴ� Ű����
// ���ʸ� Ÿ�� T ����
template<class T>   
void myswap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

// �ΰ��� ���� �޾Ƽ� ���� ū ���� �����ϴ� ���ʸ� �Լ� bigger()
template<class T>
T bigger(T a, T b) {
	return (a >= b) ? a : b;
}

// �迭�� ���� �޾Ƽ� ��� ���
template<class T>
void showArray(T data[], int length) {
	for (size_t i = 0; i < length; i++)
	{
		cout << data[i] << endl;
	}
}

void main() {

	double ary[] = { 1.5, 5.2, 4.5};
	showArray(ary, sizeof(ary) / sizeof(ary[0]));

	int a = 4, b = 5;
	myswap(a, b);
	cout << a << "\t" << b << endl;

	double da = 4.3, db = 5.3;
	myswap(da, db);
	cout << da << "\t" << db << endl;

	char ca = 'a';
	char cb = 'b';
	myswap(ca, cb);
	cout << ca << "\t" << cb << endl;
}