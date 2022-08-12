#include<iostream>
using namespace std;
class Base {
public:
	virtual void f() { cout << "Base" << endl; }
};
class Derived : public Base {
public:
	void f() { 		
		cout << "Derived" << endl; 
	}
};
class GrandDerived : public Derived {
public:
	void f() { 
		Base::f(); // virtual ���迡�� �ʿ信 ���� ���� ȣ���� �ʿ��ϸ� Ŭ����::�޼ҵ�()
		cout << "GrandDerived" << endl; 
	}
};
void main() {
	Base* pb;
	Derived* pd;
	GrandDerived* pg;
	
	GrandDerived grand;
	pb =  pd = pg = &grand;
	
	pg->f();
	pd->f();
	pb->f();
}