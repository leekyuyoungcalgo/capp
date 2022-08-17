#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

template<class T>
bool comparator(T a, T b) {
	return a > b;
}

void main() {
	vector<int> v;
	v.push_back(5);
	v.push_back(2);
	v.push_back(1);
	v.push_back(4);
	v.push_back(3);

	sort(v.begin(), v.end());
	vector<int>::iterator it;
	for (it = v.begin(); it != v.end(); it++)
		cout << *it << " ";
	cout << endl;	

	//sort(v.begin(), v.end(), greater<int>());
	sort(v.begin(), v.end(), comparator<int>);
	for (it = v.begin(); it != v.end(); it++)
		cout << *it << " ";
	cout << endl;
}