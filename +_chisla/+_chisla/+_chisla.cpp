// +_chisla.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout << "Enter any non-zero Number : ";
	cin >> a;
	cout << "Enter second non-zero Number : ";
	cin >> b;
	cout << "Enter third non-zero Number : ";
	cin >> c;

	// (condition)?(if_true):(if_false) =
	// = if (condition)
	//   if true;
	// else
	//   if_false;

	(a>0) ? cout << "Number is positive\n" : cout << "Number is negative\n";
	(b>0) ? cout << "Number is positive\n" : cout << "Number is negative\n";
	(c>0) ? cout << "Number is positive\n" : cout << "Number is negative\n";


	return 0;
}