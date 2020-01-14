// CS201 Assignment 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>
#define filename "EMPLOYEE.TXT"
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

int main()
{
	//Deleting old file if exists.

	fstream file(filename);
	if (file)
	{
		file.close();
		remove(filename);
	}
	
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
		cout << "Do you want to continue? : (Y/N) ";
		cin >> controll_flag;
		cout << endl;
		if (controll_flag != 'y')
		{
			menu = false;
		}
	}
	while (menu);
	system("pause");
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
	string name;
	int code, salery = 0;
	ofstream file(filename,ios::binary|ios::app);
	if (!file)
	{
		cout << "File opening failed." << endl << endl;
		return;
	}
	else {
	employee emp;
	cout << endl << "Enter Code: ";
	cin >> code;
	cout << endl << "Enter Name: ";
	cin >> name;
	cout << endl << "Enter Salery: ";
	cin >> salery;
	cout << endl << endl;
	emp.setCode(code);
	emp.setName(name);
	emp.setSalery(salery);
	file.write((char*)&emp,sizeof(employee));
	file.close();
	cout << "Entered Successful."<< endl;
	}
}

void display_data()
{
	employee emp;
	ifstream file(filename,ios::binary);
	if (!file)
	{
		cout << "Error opening file" << endl;
		return;
	}
	while (file.read((char*)&emp,sizeof(employee)))
	{
		cout << emp.getCode() << "\t" << emp.getName() << "\t" << emp.getSalery() << endl;
	}
	file.close();
}

void increase_salary()
{
	employee emp;
	fstream file(filename,ios::binary|ios::in|ios::out);
	if (!file)
	{
		cout << "Error opening file" << endl;
		return;
	}
	int code, new_salery;
	cout << "Enter Employee code: ";
	cin >> code;
	cout << endl << "Enter Salary increase for employee: ";
	cin >> new_salery;
	cout << endl;
	file.seekg(sizeof(emp)*(code-1),ios::beg);
	file.read((char*)&emp,sizeof(employee));
	emp.setSalery(emp.getSalery()+new_salery);
	file.seekp(sizeof(emp)*(code-1),ios::beg);
	file.write((char*)&emp,sizeof(employee));
	file.close();
	cout << "Salery Increased Successful" << endl << endl;
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

