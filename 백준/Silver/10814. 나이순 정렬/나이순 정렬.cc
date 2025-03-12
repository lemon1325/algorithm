#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<int, string>a,pair<int, string>b) {
	return a.first < b.first;

}

int main() {
	int n;
	cin >> n;

	vector<pair<int, string>>people;
	for (int i = 0; i < n; i++) {
		int age;
		string name;
		cin >> age >> name;
		people.push_back(make_pair(age, name));
	}

	stable_sort(people.begin(), people.end(),compare);

	for (auto p : people) {
		cout << p.first << ' ' << p.second<<endl;
	}
	return 0;
}