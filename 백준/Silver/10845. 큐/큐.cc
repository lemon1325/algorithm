#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main() {
	int n;
	cin >> n;
	queue<int>que;
	for (int i = 0; i < n; i++) {
		string command;
		cin >> command;
		if (command == "push") {
			int num;
			cin >> num;
			que.push(num);
		}
		else if (command == "front" && !que.empty())
			cout << que.front() << endl;
		else if (command == "back" && !que.empty())
			cout << que.back() << endl;
		else if (command == "pop" && !que.empty()) {
			cout << que.front() << endl;
			que.pop();
		}
		else if (command == "size")
			cout << que.size() << endl;
		else if (command == "empty")
			cout << que.empty() << endl;
		else
			cout << -1 << endl;
	}
	return 0;
}