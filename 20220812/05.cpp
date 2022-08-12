#include<iostream>
using namespace std;
// 추상 클래스
// 객체생성의 목적이 아님고.. 기본클래스의 역활에 충실
// 파생클래스를통해 순수가상함수를구현하는데 목적 --> 강제로...
class Shape {
private:
	Shape* next;

public:
	// 순수 가상함수( 선언만되어 있고 내용이 없는 상태)	
	virtual void draw() = 0;
	void paint() { draw(); }
};
class Circlr :public Shape {
	// 일반클래스가 되려면 추상메소드를 반드시 override해서 사용가능하게 구현
	virtual void draw() 
	{
		cout << "circle draw" << endl;
	}
};

void main() {
	// Shape shape; // 컴파일 오류
	Shape* p;
	Circlr c;




}