#include<iostream>
#include<fstream>
using namespace std;
void main() {
	char name[10], dept[20];
	int sid;

	// 키보드로부터 읽기
	cout << "이름";
	cin >> name;
	cout << "학번";
	cin >> sid;
	cout << "학과";
	cin >> dept;

	// 파일 열기	
	ofstream fout("D:/test/student.txt");
	if (!fout) {
		cout << "파일 오픈실패" << endl;
		return;
	}

	fout << name << endl;
	fout << sid << endl;
	fout << dept << endl;

	fout.close();
	// 읽기
	ifstream fin;
	fin.open("D:/test/student.txt");
	if (!fin) {
		cout << "파일 열기 실패" << endl;
		return;
	}

	fin >> name;
	fin >> sid;
	fin >> dept;

	cout << name << endl;
	cout << sid << endl;
	cout << dept << endl;

	fin.close();

}