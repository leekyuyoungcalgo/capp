#include<iostream>
using namespace std;
// �߻� Ŭ����
// ��ü������ ������ �ƴ԰�.. �⺻Ŭ������ ��Ȱ�� ���
// �Ļ�Ŭ���������� ���������Լ��������ϴµ� ���� --> ������...
class Shape {
private:
	Shape* next;

public:
	// ���� �����Լ�( ���𸸵Ǿ� �ְ� ������ ���� ����)	
	virtual void draw() = 0;
	void paint() { draw(); }
};
class Circlr :public Shape {
	// �Ϲ�Ŭ������ �Ƿ��� �߻�޼ҵ带 �ݵ�� override�ؼ� ��밡���ϰ� ����
	virtual void draw() 
	{
		cout << "circle draw" << endl;
	}
};

void main() {
	// Shape shape; // ������ ����
	Shape* p;
	Circlr c;




}