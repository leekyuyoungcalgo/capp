#include<iostream>
using namespace std;

class Adder{
protected:
	int add(int a, int b) { return a + b; }
};

class Subtractor{
protected:
	int minus(int a, int b) { return a - b; }
};

// 다중상속.. Calculator
// 메소드 :  int calc(char op, int a, int b)
// op +  
// op - 
class Calculator :public Adder, public Subtractor {
public:
	int calc(char op, int a, int b) {
		int result = 0;
		switch (op)
		{
		case '+':
			result = add(a, b);
			break;
		case '-':
			result = minus(a, b);
			break;
		default:
			break;
		}
		return result;
	}
};
void main() {
	Calculator c;
	cout << "2 + 4 = " << c.calc('+', 2, 4) << endl;
	cout << "2 - 4 = " << c.calc('-', 2, 4) << endl;
}