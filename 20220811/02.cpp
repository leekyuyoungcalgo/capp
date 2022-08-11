#include<iostream>
using namespace std;
class Base {
private:
	int a;
protected:
	void setA(int a) { this->a = a; }
public:
	void showA() { cout << a << endl; }
};
class Derived :private Base {
	// setA  private
	// showA() private
private:
	int b;
protected:
	void setB(int b) { this->b = b; }
public:
	void showB() {
		setA(5);
		showA();
		cout << b << endl;
	}
};
class GrandDerived :private Derived {
private:
	int c;
protected:
	void setAB(int x) {
		setB(x);
		//setA(x);  //compile error
		showB();
		//showA();  //compile error
	}

};