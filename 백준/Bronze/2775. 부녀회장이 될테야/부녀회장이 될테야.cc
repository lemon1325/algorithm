#include<iostream>
#include<vector>
using namespace std;

int main() {

	int t;
	cin >> t;
	for (int cnt = 0; cnt < t; cnt++) {
		int k, n; //k는 층, n은 호
		cin >> k >> n;

		vector<vector<int>>apt(k+1,vector<int>(n,0));
		//0층인원 설정
		for (int i = 0; i < n; i++) {
			apt[0][i]=i + 1;
		}
		
		for (int j = 1; j <= k; j++) {
			for (int i = 0; i < n; i++) {
				if (i == 0) apt[j][i] = 1;
				else apt[j][i] = apt[j - 1][i] + apt[j][i - 1];
			}
		}
		cout << apt[k][n - 1] << endl;
	}

	return 0;
}