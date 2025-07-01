#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main() {

	stack<int>Stack;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string command;
		cin >> command;
		if (command == "push") {
			int num;
			cin >> num;
			Stack.push(num);
		}
		else if (command == "top") {
			if (Stack.empty()) cout << -1 << endl;
			else cout << Stack.top() << endl;
		}
		else if (command == "size")
			cout << Stack.size() << endl;
		else if (command == "empty")
			cout << Stack.empty() << endl;
		else if (command == "pop") {
			if (Stack.empty())
				cout << -1 << endl;
			else {
				cout << Stack.top() << endl;
				Stack.pop();
			}
		}
	}

	return 0;
}