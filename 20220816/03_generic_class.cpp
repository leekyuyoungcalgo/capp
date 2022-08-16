// 재너릭 클래스
#include<iostream>
using namespace std;
// maxsize = 100
template<class T>
class mStack {
private:
	int ptr=0; // stack top
	T data[100];
public:
	mStack();
	int getPtr();
	void push(T element);	
	T pop();	
};

template<class T>
void mStack<T>::push(T element){
	if (ptr >= 100)
		cout << "statck full" << endl;
	else
		data[ptr++] = element;
}
template<class T>
mStack<T>::mStack() { ptr = 0;}

template<class T>
int mStack<T>::getPtr() { return ptr; }

template<class T>
T mStack<T>::pop() {	
	if (ptr < 0) {
		cout << "stack empty" << endl;
		return 0;
	}
	return data[--ptr];
	
}

class Point {
private:
	int x, y;
public:
	Point(int x = 0, int y = 0) {
		this->x = x;
		this->y = y;
	}
	void show() {
		cout << "x : " << x << "\ty : " << y << endl;
	}
};

void main() {
	// 정수형 generic stack
	/*mStack<int> ms;
	ms.push(10);
	cout << ms.pop() << endl;	*/

	// int *만 저장하는 스텍
	mStack<int*> ipStack;
	int* p = new int[3];
	for (size_t i = 0; i < 3; i++) p[i] = i * 10;
	ipStack.push(p);

	int* q = ipStack.pop();
	for (size_t i = 0; i < 3; i++) cout << q[i] << " ";
	cout << endl;


	mStack<Point> pointStack;
	Point a(2, 3), b;
	pointStack.push(a);
	b = pointStack.pop();
	b.show();

	mStack<Point*> pStack;
	pStack.push(new Point(10, 20));
	Point* pPoint = pStack.pop();
	pPoint->show();

	mStack<string> stringStack;
	stringStack.push("C++ is very good");
	string str = stringStack.pop();
	cout << str << endl;




}