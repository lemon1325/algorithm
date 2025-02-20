#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
	unsigned long r = 31, m = 1234567891;

	int n;
	cin >> n;
	string str;
	cin >> str;
	vector<unsigned long>alphaToIntNums;

	//숫자로 변환
	for (int i = 0; i < n; i++) {
		alphaToIntNums.push_back((int)str[i]-96);
	}
	
	unsigned long long sum = 0;
	unsigned long long num = 1;
	for (int i = 0; i < n; i++) {
		sum = (sum+(alphaToIntNums[i] * num)%m) % m;
		num = (num * r) % m;
		
	}

	cout << sum;

	return 0;
}