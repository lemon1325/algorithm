#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int n, m;
vector<bool>visited;
vector<int>dfs_vec;
void dfs(vector<vector<int>>&matrix, int cur) {
	visited[cur] = true;
	cout << cur << ' ';

	for (int i = 1; i <= n; i++) {
		if (matrix[cur][i] == 1 && !visited[i]) {
			dfs(matrix, i);
		}
	}
}
void bfs(vector<vector<int>>&matrix,int v) {
	queue<int>que;
	que.push(v);
	while (!que.empty()) {
		int cur = que.front();
		cout << cur << ' ';
		que.pop();
		for (int i = 1; i <= n; i++) {
			if (matrix[cur][i] == 1) {
				bool is_exist = false;
				//큐에 존재하는지 확인
				for (int k = 0; k < que.size(); k++) {
					int tmp = que.front();
					if (tmp == i) is_exist = true;
					que.pop();
					que.push(tmp);
				}
				if(!is_exist)
					que.push(i);
			}
		}
		// 방문처리
		for (int i = 1; i <= n; i++) {
			matrix[cur][i] = 0;
 			matrix[i][cur] = 0;
		}
	}


}

int main() {
	int v;
	cin >> n >> m >> v;
	vector<vector<int>>matrix(n+1,vector<int>(n+1,0));
	for (int i = 1; i <= m; i++) {
		int num1, num2;
		cin >> num1 >> num2;
		matrix[num1][num2] = 1;
		matrix[num2][num1] = 1;
	}
	vector<vector<int>>m = matrix;
	visited = vector<bool>(n + 1, false);
	dfs(m, v);
	
	cout << endl;

	bfs(matrix, v);

	return 0;
}