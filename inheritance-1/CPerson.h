#pragma once
#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;

class CPerson{
protected:
	string name;
	string PID;
public:
	CPerson();
	CPerson(string, string);
	void getData();
	void display();
};

