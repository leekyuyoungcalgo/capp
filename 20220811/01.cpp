#include<iostream>
#include<string>
using namespace std;
// base class
class Point {
protected:
	int x, y;
public:
	Point(int x = 0, int y = 0) {
		this->x = x;
		this->y = y;
	}
	void set(int x, int y) {
		this->x = x;
		this->y = y;
	}
	void showPoint() {
		cout << "x : " << x << "  y : " << y << endl;
	}
};

class ColorPoint :public Point {
private:
	string color;
public:
	ColorPoint(int x=0, int y=0, string color = "black"):Point(x,y) {
		this->color = color;
	}
	void setColor(string color) {
		this->color = color;
	}
	// override( over write)
	void showPoint() {		
		cout << "x : " << x << "  y: " << y << "  color : " << color << endl;
	}
};




void main() {
	ColorPoint cp;
	// up-casting  업 캐스팅
	// 파생 클래스의 '포인터'가 기본 클래스 포인터에 치환되는 것
	// 사람을 동물로 본다

	ColorPoint* pDer = &cp; 
	Point* pBase = pDer; // 업캐스팅

	pDer-> set(3, 4); // 자식객체포인터로 부모의 set함수 사용
	pBase->showPoint();  // point showPoint()
	pDer->setColor("Red");
	pDer->showPoint(); //  colorPointer showPoint()
	//pBase->showColorPoint();

	// down-casting 다운 캐스팅	
	pDer =(ColorPoint*)pBase;
	pDer->setColor("Blue");
	pDer->showPoint(); // ColorPointer showPoint()

	//
	printf("\n에러발생전\n");
	Point p;
	Point* pp = &p;
	pDer =(ColorPoint*) pp;
	// pDer->showColorPoint();  심각한 에러가 발생  실제없는 함수를 사용하려고 함

	// cp 는 ColorPoint의 객체
	// cp.x  protected는 외부에서 사용 불가능
}
/*
* Q1. 파생 클래스의 객체가 생성될때 파생 클래스의 생성자와 기본 클래스의
* 생성자가 모두 실행된다. 1. 그렇다  2. 아니다
* 
* Q2. 파생 클래스의 생성자와 기본클래스의 생정자 중 어떤 생성자가 먼저 실행되는가?
* 1. 파생 클래스  2. 기본 클래스
*/
/*
* 상속시 접근 제한자 역활  - 대부분 public  
* public : 기본 클래스의 protected, public 맴버를 그대로 상속
* private : 기본 클래스의 protected, public 맴버를 private으로  상속
* protected : 기본 클래스의 protected, public 맴버를 protected으로  상속
*/