#include<iostream>
using namespace std;
#include "mytriangle.h"
int main()
{
	cout << "请输入三角形的三边长："<<endl;
	double side1, side2, side3;
	cin >> side1 >> side2 >> side3;
	if (is_valid(side1, side2, side3)) {
		cout << "三角形的面积为" << triangle_area(side1, side2, side3);

	}
	else {
		cout << "该三边无法组成三角形" << endl;

	}
	return 0;
}