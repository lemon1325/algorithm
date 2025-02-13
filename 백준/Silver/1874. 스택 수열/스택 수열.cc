#include<iostream>
#include<stack>
#include<vector>
#include<string>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	stack<int> Stack;
	vector<int> v;
	vector<string>result;
	int n;
	cin >> n;
	Stack.push(0);

	for (int i = 1; i <= n; i++) {
		v.push_back(i);
	}

	auto it = v.begin();
	for (int i = 1; i <= n; i++) {
		int num;
		cin >> num;
	
		//push
		while (Stack.top() < num) {
			while (Stack.top() >= *it) it++;
			Stack.push(*it);
			result.push_back("+");
			if(Stack.top()<num )
				it++;
		}
	
		//pop
		if (Stack.top() >= num) {
			Stack.pop();
			result.push_back("-");
			it = v.erase(it);
			if (it != v.begin())
				it--;
		}
		if (Stack.top() >= num ) {
			cout << "NO";
			return 0;
		}
	}
	for (auto r : result) {
		cout << r << '\n';
	}
	return 0;
}