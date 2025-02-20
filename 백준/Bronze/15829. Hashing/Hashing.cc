#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
	int r = 31, m = 1234567891;

	int n;
	cin >> n;
	string str;
	cin >> str;
	vector<int>alphaToIntNums;

	//숫자로 변환
	for (int i = 0; i < n; i++) {
		alphaToIntNums.push_back((int)str[i]-96);
	}
	
	int sum = 0;
	for (int i = 0, k=1; i < n; i++,k*=r) {
		sum += alphaToIntNums[i] * k;
		sum = sum % m;
	}

	cout << sum;

	return 0;
}