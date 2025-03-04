#include<iostream>
using namespace std;

int factorial(int a);

int main() {
	int n, k;
	cin >> n >> k;

	cout << factorial(n) / (factorial(k) * factorial(n - k));


	return 0;
}

int factorial(int a) {
	int result = 1;
	for (int i = 1; i <= a; i++) {
		result *= i;
	}
	return result;
}