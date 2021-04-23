/*
 *Leslie Glascoe
 * CIS 1202-501
 * Programming Assignment #15B Templates
 * 04/23/2021
 */

#include<iostream>
#include<cmath>

using namespace std;

template <class T> //needed for templates

T half(T number) { // template function called half 

	return round(number / 2.0); // returns half the value rounded up or down depending on the value
}

int half(int number) { // funtion called half that accepts an integer

	double result; // to hold the double result
	result = static_cast<double>(number / 2.0); // gets the result of half the value by changing the integer into a double variable
	return round(result); // return the value rounded accordingly.
}


int main() {
	
	double a = 7.0; // a double value
	float b = 5.0; // a float value
	int c = 3; // an interger value

	cout << half(a) << endl; // calls half function to return value a
	cout << half(b) << endl; // calls half function to return value b
	cout << half(c) << endl; // calls half function to return value c



	system("pause");
	return 0;
}