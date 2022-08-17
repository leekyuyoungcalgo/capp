#include<iostream>
#include<vector>
using namespace std;

void main() {
	vector<int> v;
	for (size_t i = 0; i < 3; i++)
	{
		v.push_back(i + 1);
	}
	vector<int>::iterator it;
	for (it = v.begin(); it != v.end(); it++) 
	{
		int n = *it;
		n *= 2;
		*it = n;
	}
	for (it = v.begin(); it != v.end() ; it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}