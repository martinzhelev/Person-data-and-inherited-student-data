#include<iostream>
#include<stdlib.h>
#include<string>
#include"CPerson.h"
#include"CStudent.h"
using namespace std;

int main() {
int marks[5] = { 2, 4, 6, 5, 3 };
	CStudent p1, p2("martin", "09273427", "216263",marks);
	//p1.display();
	p2.display();
	//p1.getData();
	//p1.display();
	p2.average();
}