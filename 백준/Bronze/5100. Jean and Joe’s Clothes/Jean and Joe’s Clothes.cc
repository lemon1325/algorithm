#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
	//조(M,L), 진(12이상), 제인(12미만), 제임스(S)
	while (true) {
		vector<int>numOfClothes(5, 0);

		int n;
		cin >> n;
		if (n == 0)
			break;
		for (int i = 0; i < n; i++) {
			string size;
			cin >> size;
			
			if (size == "X") {
				numOfClothes[4]++;
				continue;
			}
			if (size == "M" || size == "L") {
				numOfClothes[0]++;
				continue;
			}

			else if (size == "S") {
				numOfClothes[3]++;
				continue;
			}
			int sizeNum = stoi(size);
			if (sizeNum >= 12)
				numOfClothes[1]++;
			else if (sizeNum < 12)
				numOfClothes[2]++;

		}

		for (auto a : numOfClothes)
			cout << a << ' ';
		cout << endl;
	}
	return 0;
}