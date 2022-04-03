#include "CPerson.h"
#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;

 CPerson::CPerson(){
	name = "not enetered";
	PID = "----------";
}

CPerson::CPerson(string name, string PID) {
	this->name = name;
	this->PID = PID;
 }
void CPerson::getData() {
	cout << "Name: ";
	getline(cin, name);
	cout << "PID: ";
	getline(cin, PID);
}
void CPerson::display() {
	cout << "the name is: " << name << " The PID is: " << PID << endl;
}