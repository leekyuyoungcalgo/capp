#include<iostream>
using namespace std;
class Shape {
protected:
	virtual void draw() {}
	friend void paint(Shape* p);
};
class Circle :public Shape {
protected:
	void draw() { cout << "���� �׸���" << endl; }
};
class Rect :public Shape {
protected:
	void draw() { cout << "�簢���� �׸���" << endl; }
};
class Line :public Shape {
protected:
	void draw() { cout << "���� �׸���" << endl; }	
};

void paint(Shape* p) {
	p->draw();
}

// ������..
// �پ��� ���·� �����Ѵ�.
// 1 ��Ӱ���
// 2.override �� �Լ��� �־�� �Ѵ�.
// 3.override�� �θ��� �Լ��� virtual Ű����� ����Ǿ�� �Ѵ� 
// 4. ����Ҷ� �����ͷ� ����ؾ���..�� ��ĳ������ �̿��ؼ� �ڽ��� �����͸� 
// �θ������Ϳ� �����ؼ� �θ�Ÿ���� �����ͷ� ����Ѵ�.
// �׸��� ���� �����Ҷ��� �����Ϸ��� �θ������Ϳ� ����ִ� ���� �������� �޼ҵ带 ����Ѵ�
void main() {
	Line *li = new Line();
	paint(li);
	paint(new Rect());
	paint(new Circle());
	paint(new Line());
}