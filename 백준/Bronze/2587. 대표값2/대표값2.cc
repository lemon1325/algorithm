#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	vector<int>nums;
	double sum=0;
	for (int i = 0; i < 5; i++) {
		int num;
		cin >> num;
		sum += num;
		nums.push_back(num);
	}
	sort(nums.begin(), nums.end());
	cout << sum / 5 << endl;
	cout << nums[2];
	return 0;
}