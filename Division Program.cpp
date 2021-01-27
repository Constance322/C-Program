#include<iostream>
using namespace std;

#include<cmath>
int main() {
	float x, y,solution;

	cout << "Enter a number";
	cin >> x;
	cout << "Enter another number";
	cin >> y;

	solution = x/y;
	cout << "The solution is:" << solution;
	return 0;
}