#include<iostream>
#include<vector>
using namespace std;

//카드의 합이 M이하 중에 가장 커야함
//N장의 카드중에 플레이어는 3장의 카드를 골라야 함

int main() {
	int n,m;
	cin >> n >> m;

	vector<int>cards;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		cards.push_back(num);
	}

	int maxSum=0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				int sum = cards[i]+cards[j]+cards[k];
				if (m >= sum && maxSum < sum)
					maxSum = sum;
			}
		}
	}
	cout << maxSum;
	return 0;
}