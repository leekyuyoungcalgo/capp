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
	// up-casting  �� ĳ����
	// �Ļ� Ŭ������ '������'�� �⺻ Ŭ���� �����Ϳ� ġȯ�Ǵ� ��
	// ����� ������ ����

	ColorPoint* pDer = &cp; 
	Point* pBase = pDer; // ��ĳ����

	pDer-> set(3, 4); // �ڽİ�ü�����ͷ� �θ��� set�Լ� ���
	pBase->showPoint();  // point showPoint()
	pDer->setColor("Red");
	pDer->showPoint(); //  colorPointer showPoint()
	//pBase->showColorPoint();

	// down-casting �ٿ� ĳ����	
	pDer =(ColorPoint*)pBase;
	pDer->setColor("Blue");
	pDer->showPoint(); // ColorPointer showPoint()

	//
	printf("\n�����߻���\n");
	Point p;
	Point* pp = &p;
	pDer =(ColorPoint*) pp;
	// pDer->showColorPoint();  �ɰ��� ������ �߻�  �������� �Լ��� ����Ϸ��� ��

	// cp �� ColorPoint�� ��ü
	// cp.x  protected�� �ܺο��� ��� �Ұ���
}
/*
* Q1. �Ļ� Ŭ������ ��ü�� �����ɶ� �Ļ� Ŭ������ �����ڿ� �⺻ Ŭ������
* �����ڰ� ��� ����ȴ�. 1. �׷���  2. �ƴϴ�
* 
* Q2. �Ļ� Ŭ������ �����ڿ� �⺻Ŭ������ ������ �� � �����ڰ� ���� ����Ǵ°�?
* 1. �Ļ� Ŭ����  2. �⺻ Ŭ����
*/
/*
* ��ӽ� ���� ������ ��Ȱ  - ��κ� public  
* public : �⺻ Ŭ������ protected, public �ɹ��� �״�� ���
* private : �⺻ Ŭ������ protected, public �ɹ��� private����  ���
* protected : �⺻ Ŭ������ protected, public �ɹ��� protected����  ���
*/