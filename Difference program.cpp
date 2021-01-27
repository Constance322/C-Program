#include<iostream>
using namespace std;

#include<cmath>
int main() {
	int x, y,difference;

	cout << "Enter an integer";
	cin >> x;
	cout << "Enter another integer";
	cin >> y;

	difference = x - y;
	cout << "The dufference is:" << difference;
	return 0;
}