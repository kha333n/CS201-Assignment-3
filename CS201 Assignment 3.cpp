// CS201 Assignment 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class employee
{
	int code;
	string name;
	int salery;
public:
	employee();
	int getCode();
	bool setCode(int);
	string getName();
	bool setName(string);
	int getSalery();
	bool setSalery(int);
};

employee::employee()
{
}

int employee::getCode()
{
	return code;
}

bool employee::setCode(int x)
{
	if (code = x)
	{
		return true;
	}
	return false;
}

string employee::getName()
{
	return name;
}

bool employee::setName(string n)
{
	name = n;
	return true;
}

int employee::getSalery()
{
	return salery;
}

bool employee::setSalery(int s)
{
	if (salery = s)
	{
		return true;
	}
	return false;
}

int main()
{
	fstream employeedata;
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
