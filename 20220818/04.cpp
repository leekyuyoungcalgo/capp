// 문자열 데이터 집합에서 숫자형태만 뽑아서 모든 합을 구해보고 또 해당 숫자문자만 저장 vector
#include<iostream>
#include<string>
#include<vector>
using namespace std;

void isStrToInt(const char* str, int length) {
	while (*str != '\0')
	{
		if (!isdigit(*str)) throw "숫자로 변환할수 없습니다.";
		str++;
	}	
}

void main() {
	
	vector<const char*> v = {
		"12515","5145","12","1411ad","홍길동","4585"
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
