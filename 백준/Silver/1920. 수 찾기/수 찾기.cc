#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//순차탐색은 시간복잡도가 O(n)이라
// m개의 데이터를 입력받고, 순차탐색을 실행하면 시간복잡도가 O(n*m)이 됨->시간초과
//따라서 정렬 후에 binary search 방법을 이용함(시간복잡도는 O(mlogn)

int n, m;
vector<int>nums;

bool binarySearch(int num) {
	int begin = 0, end =nums.size() - 1;
	while (begin <= end) {
		int mid = (begin + end) / 2;
		if (num == nums[mid])
			return true;
		else if (num > nums[mid])
			begin = mid + 1;
		else end = mid-1 ;
	}
	return false;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		nums.push_back(num);
	}

	sort(nums.begin(), nums.end());

	cin >> m;
	for (int i = 0; i < m; i++) {
		int num;
		cin >> num;
		cout<<binarySearch(num)<<'\n';
	}

	return 0;
}