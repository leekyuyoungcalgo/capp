#include<iostream>
#include<fstream>
using namespace std;
void main() {
	char name[10], dept[20];
	int sid;

	// Ű����κ��� �б�
	cout << "�̸�";
	cin >> name;
	cout << "�й�";
	cin >> sid;
	cout << "�а�";
	cin >> dept;

	// ���� ����	
	ofstream fout("D:/test/student.txt");
	if (!fout) {
		cout << "���� ���½���" << endl;
		return;
	}

	fout << name << endl;
	fout << sid << endl;
	fout << dept << endl;

	fout.close();
	// �б�
	ifstream fin;
	fin.open("D:/test/student.txt");
	if (!fin) {
		cout << "���� ���� ����" << endl;
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