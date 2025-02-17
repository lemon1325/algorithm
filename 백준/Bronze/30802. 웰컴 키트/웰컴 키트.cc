#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n,t,p;//n은 참가자 수, t는 티셔츠 묶음 수, p는 펜 묶음 수
	vector<int>tshirts;
	cin >> n;
	
	
	for(int i=0;i<6;i++) {
		int size;
		cin >> size;
	
		tshirts.push_back(size);
	}

	cin >> t >> p;

	int t_sum = 0;
	for (auto s : tshirts) {
		t_sum += s / t;
		if (s % t != 0)
			t_sum++;
		
		
	}
	cout << t_sum << endl;

	cout << n / p << ' ' << n % p;
	return 0;
}