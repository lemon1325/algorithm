#include<iostream>
#include<string>
using namespace std;

int main() {

	int n;
	cin >> n;
	int titleNum = 666;

	int cnt = 0;
	while (cnt < n) {
		string numToStr = to_string(titleNum);
		if (numToStr.find("666")!=string::npos) {
			cnt++;
		}
		titleNum++;
	}
	cout << titleNum-1;

	return 0;
}