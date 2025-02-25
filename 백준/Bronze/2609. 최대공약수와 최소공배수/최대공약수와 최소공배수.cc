#include<iostream>
using namespace std;


int gcd(int num1, int num2) {
	int r = num1 % num2;
	if (r == 0)
		return num2;
	return gcd(num2, r);
}

int main() {

	int num1, num2;
	cin >> num1 >> num2;

	//최대공약수
	//유클리드 호제법 이용
	int gcdValue = gcd(num1, num2);
	cout<< gcdValue <<endl;


	//최소공배수
	//최대공약수를 이용해 계산
	cout << num1 * num2 / gcdValue;

	return 0;

}
