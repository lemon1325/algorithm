#include<iostream>
using namespace std;



int main() {
	int n;
	cin >> n;

	if (n % 5 == 0) {
		cout << n / 5 << endl;
		return 0;
	}
	int cnt = 0;
	while (true) {
		if (n % 5 == 0) {
			cnt += n / 5;
			break;
		}
		n -= 3;
		cnt++;

		if (n < 0) {
			cout << -1 << endl;
			return 0;
		}
	}
	cout << cnt << endl;
	
	return 0;
}