/*
* 가상상속 : 다중상속으로 인한 기본 클래스 맴버의 중복 상속 해결
* 상속받을때 virtual 키워드를 선언
* 파생클래스의 객체가 생성될때 기본 클래스의 맴버는 한번만 생성
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