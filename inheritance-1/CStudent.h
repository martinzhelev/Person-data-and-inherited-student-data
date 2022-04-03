/*�� �� ������� ���������� ���� CStudent, ����� ������� :
-���������� �����;
-������ �� 5 ����������;
-������������(� ��������� �� ����������� �� ������� ����);
-���� - ������� getData � display;
-���� - ������� �� ����������� �� ������ �����.
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

