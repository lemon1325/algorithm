#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main() {

	double A, B, V;
	cin >> A >> B >> V;
	

	cout << fixed<< setprecision(0)<< ceil((V - B) / (A - B))<<endl;
	return 0;
}