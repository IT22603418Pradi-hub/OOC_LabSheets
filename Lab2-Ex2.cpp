// lab2ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
using namespace std;

struct Rectangle {
    int length;
    int width;
};

float area(Rectangle r);

int main()
{
	struct Rectangle house;
	struct Rectangle yard;

	cout << "Enter the length of house : ";
	cin >> house.length;

	cout << "Enter the width of house : ";
	cin >> house.width;

	cout << "Enter the length of yard : ";
	cin >> yard.length;

	cout << "Enter the width of yard : ";
	cin >> yard.width;
	
	float AreaYard = area(yard);
	
	float AreaHouse = area(house);

	float AreaGreen = AreaYard - AreaHouse;
	
	cout << "Area of green is : " << AreaGreen;
}

float area(Rectangle r) {
	int length, width;
	float area;
	
	area = r.length * r.width;
	
	return area;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
