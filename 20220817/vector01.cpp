#include<iostream>
#include<vector>
#include<string>
using namespace std;
void main() {
	//vector<int> v;
	//v.push_back(1);
	//v.push_back(2);
	//v.push_back(3);

	//for (size_t i = 0; i < v.size(); i++)
	//{
	//	//cout << v[i] << endl;   // 인덱스 방식
	//	cout << v.at(i) << endl; // 메소드 방식
	//}
	//v[0] = 100;
	//v.at(0) = 200;
	//cout << v[0] << endl;

	vector<string> sv;
	string name;
	cout << "이름을 5개 입력하세요" << endl;
	for (size_t i = 0; i < 5; i++)
	{
		cout << i + 1 << ">>";
		getline(cin, name);
		sv.push_back(name);
	}	
	for (size_t i = 0; i < 5; i++)
	{
		cout << sv[i] << endl;
	}
}