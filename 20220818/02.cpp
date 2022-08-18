// 0으로 나누는 행위를 예측하고 예외처리 try ~catch

#include<iostream>
#include<string>
using namespace std;
int checkNumber(string number);

void main() {
	string n;
	int sum = 0;
	double avarage=0.0;
	while (true )
	{
		cout << "합을입력 : ";
		cin >> sum;
		cout << "인원수 : ";
		cin >> n;   
		try
		{			
			int data = checkNumber(n);
			avarage = (double)sum / data;
			cout << "평균 : " << avarage << endl;			
		}
		catch (int x)
		{
			cout << "정수형관련 예외가 발생했습니다." << endl;
		}
		catch (const char* s) {
			cout << "문자열관련 예외가 발생했습니다." << endl;
		}
		
	}
}