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
		Base::f(); // virtual 관계에서 필요에 의해 정적 호출이 필요하면 클래스::메소드()
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