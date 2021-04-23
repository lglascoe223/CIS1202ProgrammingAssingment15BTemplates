/*
 *Leslie Glascoe
 * CIS 1202-501
 * Programming Assignment #15B Templates
 * 04/23/2021
 */

#include<iostream>
#include<cmath>

using namespace std;

template <class T>

T half(T number) {

	return round(number / 2.0);
}

int half(int number) {

	double result;
	result = static_cast<double>(number / 2.0);
	return round(result);
}


int main() {
	
	double a = 7.0;
	float b = 5.0;
	int c = 3;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;



	system("pause");
	return 0;
}