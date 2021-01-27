#include<iostream>
using namespace std;

#include<cmath>
int main() {
	float a, b, c, d, e, result;
	a = 8;
	b = 2;
	c = 5;
	d = 24;
	e = 4;

	result = ((a + b * c) / (d / e));

	cout << result;
	return 0;
}