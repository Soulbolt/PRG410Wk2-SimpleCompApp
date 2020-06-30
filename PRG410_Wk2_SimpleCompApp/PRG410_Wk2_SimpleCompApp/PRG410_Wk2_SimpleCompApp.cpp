// PRG410_Wk2_SimpleCompApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<iomanip>				 //header to use setprescision(2)
using namespace std;


int main()
{

	int a, b, c, max, min;		//int variables to store users input


	cout << "Enter 3 integers: " << endl; //prompt user to input 3 integers
	cin >> a >> b >> c;					//store each integer on int variables: a, b, c
	
	float sum, average, product;	//float variables to store and calculate sum, average, product

	//FIND MAX
	if (a >= b && a >= c) //if a is greater or equal to b & c 
	{
		max = a;		//a is max

	}
	else
	{
		if (b >= c) //if b is greater or equal to c
			max = b;//b is max
		else
			max = c; //c is max
	}

	//FIND MIN
	if (a <= b && a <= c)//if a is smaller or equal to b and c
	{

		min = a;		//a is min
	}
	else
	{
		if (b <= c)		//if b is smaller or equal to c
			min = b;	//b is min
		else
			min = c;	//c is min
	}

	cout << "The largest number is: " << max << " and the smallest number is: " << min << endl; //display max and min values	
	
	//FIND EQUAL
	if (a == b && a == c) //if a equals to b and c
		cout << "These numbers are equal" << endl; //display equal value message



	sum = a + b + c;		//calculates sum
	average = (sum) / 3;	//calculates average
	product = a * b * c;	//calculates product

	cout << fixed << setprecision(2) << "Sum is: " << sum << endl;			//displays sum
	cout << fixed << setprecision(2) << "Average is: " << average << endl;	//displays average
	cout << fixed << setprecision(2) << "Product is: " << product << endl;	//displays product

	return 0;
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
