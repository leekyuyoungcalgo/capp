// ���ڿ� ������ ���տ��� �������¸� �̾Ƽ� ��� ���� ���غ��� �� �ش� ���ڹ��ڸ� ���� vector
#include<iostream>
#include<string>
#include<vector>
using namespace std;

void isStrToInt(const char* str, int length) {
	while (*str != '\0')
	{
		if (!isdigit(*str)) throw "���ڷ� ��ȯ�Ҽ� �����ϴ�.";
		str++;
	}	
}

void main() {
	
	vector<const char*> v = {
		"12515","5145","12","1411ad","ȫ�浿","4585"
	};

	long result = 0L;
	for (auto item : v) {
		try
		{
			isStrToInt(item, sizeof(item));
			result += atoi(item);
		}
		catch (const char*)
		{
			continue;
		}
	}
	/*
	long result = 0L;
	for (auto it = v.begin(); it !=v.end() ; it++)
	{
		result += atoi(* it);
	}
	*/
	
}
