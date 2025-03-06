#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

bool compare(string str1, string str2) {
	if (str1.length() == str2.length())
		return str1 < str2;
	return str1.length() < str2.length();
}

int main() {
	int n;
	cin >> n;
	vector<string>words;

	for (int i = 0; i < n; i++) {
		string word;
		cin >> word;
		words.push_back(word);
	}
	sort(words.begin(), words.end(), compare);

	string before = "";
	for (int i = 0; i < words.size(); i++) {
		if (before != words[i]) {
			cout << words[i]<<endl;
		}
		before = words[i];
	}

	
	return 0;
}