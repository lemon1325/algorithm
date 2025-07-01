#include<iostream>
using namespace std;

bool is_prime(int num) {
	if (num == 1)
		return false;
	for (int i = 2; i < num; i++) {
		if (num % i == 0)
			return false;
	}
	return true;
}

int main() {
	int n;
	cin >> n;
	int count = 0;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		if (is_prime(num))
			count++;

	}
	cout << count << endl;

	return 0;
}