#include<iostream>
using namespace std;
class Shape {
protected:
	virtual void draw() {}
	friend void paint(Shape* p);
};
class Circle :public Shape {
protected:
	void draw() { cout << "원을 그린다" << endl; }
};
class Rect :public Shape {
protected:
	void draw() { cout << "사각형을 그린다" << endl; }
};
class Line :public Shape {
protected:
	void draw() { cout << "선을 그린다" << endl; }	
};

void paint(Shape* p) {
	p->draw();
}

// 다형성..
// 다양한 형태로 존재한다.
// 1 상속관계
// 2.override 한 함수가 있어야 한다.
// 3.override된 부모의 함수가 virtual 키워드로 선언되어야 한다 
// 4. 사용할때 포인터로 사용해야함..즉 업캐스팅을 이용해서 자식의 포이터를 
// 부모포인터에 대입해서 부모타입의 포인터로 사용한다.
// 그리고 실제 동작할때는 컴파일러가 부모포인터에 들어있는 실제 포인터의 메소드를 사용한다
void main() {
	Line *li = new Line();
	paint(li);
	paint(new Rect());
	paint(new Circle());
	paint(new Line());
}