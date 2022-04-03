/*Да се създаде производен клас CStudent, който съдържа :
-факултетен номер;
-оценки по 5 дисциплини;
-конструктори(с извикване на конструктор на базовия клас);
-член - функции getData и display;
-член - функция за изчисляване на среден успех.
*/
#pragma once
#include "CPerson.h"
#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;

class CStudent : public CPerson{
protected:
	string FN;
	int grades[5];
public:
	CStudent();
	CStudent(string, string, string, int[]);
	void getData();
	void display();
	void average();
};

