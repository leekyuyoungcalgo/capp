#include<iostream>
#include<vector>
#include<algorithm>  // for_each
#include<string>
using namespace std;
//void show() {
//	cout << "hello";
//}
void greeting(string msg, void(*fn)() ) 
{
	(*fn)();
	cout << " " << msg << endl;
}

void main() {
	greeting(" how are you!", []() {cout << "godd morning......."; });

	vector<int> v = { 5,4,6,8,9 };
	int sum = 0;
	for_each(v.begin(), v.end(), [&sum](int x) {sum += x; });
	cout << sum << endl;

}