#include<iostream>
using namespace std;
class Person {
public:
	virtual int enterPrice() { return -1; }
};
class Child :public Person {
public:
	int enterPrice() { return 1000; }
};
class TeanAger : public Person {
public:
	int enterPrice() { return 3000; }
};
class Adult : public Person {
public:
	int enterPrice() { return 10000; }
};
void main() {
	//// 정수형 배열
	//int ary[3] = {};
	//int* pAry = ary;
	//// 포인터형 배열
	//int* PAry_ary[3];

	//PAry_ary[0] = pAry;

	Person* pPerson;
	Child* pChild, child;
	pChild = &child;
	//printf("%d\n",pChild->enterPrice());

	pPerson = pChild;
	//printf("%d\n",pPerson->enterPrice());

	Person* array[3];
	TeanAger t;
	Adult a;
	array[0] = &child;
	array[1] = &a;
	array[2] = &t;
	
	for (size_t i = 0; i < 3; i++)
	{
		printf("%d\n", array[i]->enterPrice());
		//printf("%d\n", (*array +i)->enterPrice() ); //  확인해 볼것
	}

} 