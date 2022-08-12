// 파생클래스에서 메소드를 재 정의!
#include<iostream>
using namespace std;
class Base {
public:
	virtual void f() { cout << "Base::f() called" << endl; }   // 라~떼는 말이야..
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
	// 업캐스팅
	pBas = pDer;
	pBas->f(); // Base f()
}