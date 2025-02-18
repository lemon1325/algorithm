#include<iostream>
using namespace std;

int main() {
	int n;
	

	cin >> n;


	int count = 1;

	if (n == 1) {
		cout << count << endl;
		return 0;
	}
	n -= 2;
	for (int i = 6; n >= 0; i +=6) {
		count++;
		n -= i;
	}
	cout << count << endl;
	
	return 0;
}