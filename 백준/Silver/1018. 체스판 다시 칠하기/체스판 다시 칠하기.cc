#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {

	int n, m;
	cin >> n >> m;
	vector<vector<char>>board(n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			char p;
			cin >> p;
			board[i].push_back(p);
		}
	}
	int min = n*m;
	for (int a = 0; a < n - 7; a++) {
		for (int b = 0; b < m - 7; b++) {

			int cnt1 = 0, cnt2 = 0;
			for (int i = a; i < a+8; i++) {
				for (int j = b; j < b+8; j++) {

					if ((i + j) % 2 == 0) {
						if (board[i][j] == 'W') {
							cnt1++;
						}
						else {
							cnt2++;
						}
					}
					else {
						if (board[i][j] == 'W') {
							cnt2++;
						}
						else {
							cnt1++;
						}

					}
				}
			}
			int result = (cnt1 > cnt2) ? 64 - cnt1 : 64 - cnt2;
			if (min > result)
				min = result;
		}
	}
	
	cout << min << endl;
	return 0;
}