#include<iostream>
using namespace std;
const int pai= 3.1415926;
int main() {
	int r, h;
	cin >> r >> h;
	cout << "圆锥的体积为" << pai * r * r * h*(1.0 / 3.0) << endl;
	return 0;

}