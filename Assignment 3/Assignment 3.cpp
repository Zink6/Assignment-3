// Assignment 3.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

struct node
{
	int value;
	node(int value)
	{
		this->value = value;
	}
};

struct list
{
	node *element;
	int value;

	list()
	{
		element = new node(value);
	}
	void insertIntoSkipList(int value);
	void removeFromSkipList(int value);
	void searchSkipList(int value);
};

int main()
{
	list list;
	int option;
	int input;

	while(1)
	{
		cout << "Skip List" << endl;
		cout << "By: Hussam Mufti and Jayesh Vag" << endl << endl;
		cout << "Select from the following options:" << endl;
		cout << "1) Search" << endl;
		cout << "2) Insert" << endl;
		cout << "3) Delete" << endl;
		cout << "Option: ";

		cin >> option;

		switch (option)
		{
		case 1:
			cout << "Enter the value to be searched: ";
			cin >> input;
			break;

		case 2:
			cout << "Enter the value to be inserted: ";
			cin >> input;
			break;

		case 3:
			cout << "Enter the value to be deleted: ";
			cin >> input;
			break;

		default:
			cout << "Please select a valid option!" << endl << endl;
		}
	}
    return 0;
}

void list::searchSkipList(int value)
{

}

void list::insertIntoSkipList(int value)
{

}

void list::removeFromSkipList(int value)
{

}
