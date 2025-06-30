#include<iostream>
#include<vector>
using namespace std;

//배추흰지렁이의 주변 4방향은 안전
//최소 필요한 지렁이 개수 카운트
// 4방향으로 연결되는 덩어리 개수 세면 됨

int offset[4][2] = { {-1,0},{0,1},{1,0},{0,-1} };
int n, m, k;

void dfs(vector<vector<int>>& field, int x, int y) {
	if (x < 0 || y < 0 || x >= n || y >= m || field[x][y] == 0)
		return;
	field[x][y] = 0;
	for (int i = 0; i < 4; i++) {
		int x1 = x + offset[i][0];
		int y1 = y + offset[i][1];
		dfs(field, x1, y1);
	}

}

int main() {
	int t;
	cin >> t;
	//테스트 횟수
	for (int i = 0; i < t; i++) {
		cin >> n >> m >> k;
		vector<vector<int>>field(n, vector<int>(m, 0));
		for (int j = 0; j < k; j++) {
			int x, y;
			cin >> x >> y;
			field[x][y] = 1;
		}
		int count = 0;
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				if (field[j][k] == 1) {
					count++;
					dfs(field, j, k);
				}
			}
		}
		cout << count << endl;

	}
	
	return 0;
}