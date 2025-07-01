//원으로 앉은사람에서 k번째 사람을 계속 제거
//전부 없어질때까지
#include<iostream>
#include<queue>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, k;
	cin >> n >> k;
	queue<int>que;
	for (int i = 1; i <= n; i++)
		que.push(i);

	
	if (k == 1) {
		cout << "<";
		while (!que.empty()) {
			cout<<que.front();
			que.pop();
			if (!que.empty())
				cout << ", ";
		}
		cout << ">";
		return 0;
	}

	cout << "<";
	int count = 1;
	while (!que.empty()) {
		int tmp = que.front();
		que.pop();
		que.push(tmp);
		count++;
		if (count == k ) {
			cout << que.front();
			que.pop();
			if (!que.empty())
				cout << ", ";
			count = 1;
		}
		
	}
	cout << ">";
	return 0;
}