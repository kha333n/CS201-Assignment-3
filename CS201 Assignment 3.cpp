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

void add_data();

void display_data();

void increase_salary();

fstream employee_database;

int main()
{
	//opening file...

	//menu
	bool menu = true;
	char controll_flag;
	int menu_selection = 0;
	do
	{
		cout << "ENTER CHOICE:" << endl;
		cout << "\t1. ADD EMPLOYEE DATA:" << endl;
		cout << "\t2. DISPLAY FILE DATA:" << endl;
		cout << "\t3. INCREASE EMPLOYEE SALARY:" << endl;
		cout << "Make a choice: ";
		cin >> menu_selection;
		cout << endl;

		switch (menu_selection)
		{
		case 1:
			add_data();
			break;
		case 2:
			display_data();
			break;
		case 3:
			increase_salary();
			break;
		default:
			cout << "Incorrect Item. Please Try again." << endl << endl;
		}
		cout << "Do you want to continue? : ";
		cin >> controll_flag;
		cout << endl;
		if (controll_flag != 'y')
		{
			menu = false;
		}
	}
	while (menu);
    return 0;
}


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

void add_data()
{
}

void display_data()
{
}

void increase_salary()
{
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
