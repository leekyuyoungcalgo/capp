#include<iostream>
using namespace std;
class Calcualtor {
public:
	virtual int add(int a, int b) = 0;
	virtual int substract(int a, int b) = 0;
	virtual double average(int ary[], int size) = 0;
};
// 일반 클래스로 만들고 사용도..
class Calc : public Calcualtor {
public:
	virtual int add(int a, int b) {
		return a + b;
	};
	virtual int substract(int a, int b) {
		return a - b;
	};
	virtual double average(int ary[], int size) {
		int result = 0;
		for (size_t i = 0; i < size; i++)
		{
			result += ary[i];
		}
		return result / (size * 0.1);
	};
};
class DumyCalc :public Calcualtor {
public:
	virtual int add(int a, int b) { return 0; };
	virtual int substract(int a, int b) { return 0; };
	virtual double average(int ary[], int size) { return 0; };
};
void main() {
	Calcualtor* pCal = new DumyCalc(); //new Calc();
	
	int a = 10, b = 20;
	cout << pCal->add(a, b) << endl;
	cout << pCal->substract(a, b) << endl;
	int nums[] = { 1,8,9,7,5,2,1 };
	double avg = pCal->average(nums, sizeof(nums) / sizeof(nums[0]));
	cout << avg << endl;
}