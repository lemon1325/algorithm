
#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n;
    vector<int>arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    cin >> m;

    for (int i = 0; i < m; i++) {
        int temp;
        cin >> temp;

        cout << upper_bound(arr.begin(), arr.end(), temp) - lower_bound(arr.begin(), arr.end(), temp) << ' ';

    }

    return 0;
}