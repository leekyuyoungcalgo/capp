// �Ļ�Ŭ�������� �޼ҵ带 �� ����!
#include<iostream>
using namespace std;
class Base {
public:
	virtual void f() { cout << "Base::f() called" << endl; }   // ��~���� ���̾�..
};

class Derived : public Base {
public:
	 virtual void f() { cout << "Derived::f() called" << endl; }
};

void main() {
	Derived d, *pDer;
	pDer = &d;
	pDer->f();  // Derived f()

	Base *pBas;
	// ��ĳ����
	pBas = pDer;
	pBas->f(); // Base f()
}