/*
* ������ : ���߻������ ���� �⺻ Ŭ���� �ɹ��� �ߺ� ��� �ذ�
* ��ӹ����� virtual Ű���带 ����
* �Ļ�Ŭ������ ��ü�� �����ɶ� �⺻ Ŭ������ �ɹ��� �ѹ��� ����
*/
#include<iostream>
using namespace std;
class BaseIO {
public:
	int mode;
};
class In : virtual public BaseIO {
public:
	int readPos;
};

class Out : virtual public BaseIO {
public:
	int writePos;
};

class InOut : public In, public Out {
public:
	bool safe;
};
void main() {
	InOut inout;
	inout.readPos = 10;
	inout.writePos = 20;
	inout.safe = true;
	inout.mode = 5;
}