// 0���� ������ ������ �����ϰ� ����ó�� try ~catch

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
		cout << "�����Է� : ";
		cin >> sum;
		cout << "�ο��� : ";
		cin >> n;   
		try
		{			
			int data = checkNumber(n);
			avarage = (double)sum / data;
			cout << "��� : " << avarage << endl;			
		}
		catch (int x)
		{
			cout << "���������� ���ܰ� �߻��߽��ϴ�." << endl;
		}
		catch (const char* s) {
			cout << "���ڿ����� ���ܰ� �߻��߽��ϴ�." << endl;
		}
		
	}
}