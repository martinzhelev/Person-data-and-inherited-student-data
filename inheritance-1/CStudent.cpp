#include "CStudent.h"
#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;

CStudent::CStudent():CPerson() {
	FN = "------";
	for (int i = 0; i < 5; i++) {
		grades[i] = 0;
	}
}
CStudent::CStudent(string name, string PID, string FN, int grades[]):CPerson(name,PID) {
	this->FN = FN;
	for(int i = 0;  i<5; i++)
	{
		this->grades[i] = grades[i];
	}
}
void CStudent::getData() {
	CPerson::getData();
	cout << "FN: ";
	getline(cin, FN);
	for (int i = 0; i < 5; i++) {
		cout << "grade[" << i << "]: ";
		cin >> grades[i];
	}
}
void CStudent::display() {
	CPerson::display();
	cout << "FN: " << FN<<endl;
	for (int i=0; i < 5; i++) {
		cout << "grade[" << i << "]=" << grades[i]<<endl;
	}
	cout << endl;
}
void CStudent::average() {
	int sum = 0;
	int avg = 0;
	for (int i = 0; i < 5; i++) {
		sum+=grades[i];
	}
	avg = sum / 5;
	cout << "the average of the grades is: " << avg;
}
