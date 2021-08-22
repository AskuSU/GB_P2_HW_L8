﻿#include<iosfwd>
#include<windows.h>
#include<memory>
#include<ctime>
#include"MyLib.h"
#include"Task1.h"
//#include"Task2.h"
//#include"Task3.h"

using namespace std;
using namespace myLib;

void Task1()
{
	cout << "Работа с Функцией div:" << endl << endl;
	int64_t a, b;
	double_t aa, bb, result;
	try
	{
		cout << "введите целое число a = ";
		a = getUserInput<int64_t>(true, true);
		cout << "введите целое число b = ";
		b = getUserInput<int64_t>(true, true);
		result = div<int64_t>(a, b);
		cout << a << " / " << b << " = " << result << endl;

		cout << "введите дробное число a = ";
		aa = getUserInput<double_t>(true, true);
		cout << "введите дробное число b = ";
		bb = getUserInput<double_t>(true, true);
		result = div<double_t>(aa, bb);
		cout << aa << " / " << bb << " = " << result << endl;
	}
	catch (std::exception &exception)
	{
		cerr << "Возникла ошибка: " << exception.what() << endl;
	}
}

void Task2()
{
	cout << "Поиск максимальной даты:" << endl << endl;
	
}

void Task3()
{
	
}


int main()
{
	setlocale(LC_ALL, "RU");
	//srand(time(0));

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	unsigned short taskNumber = 0;
	while (true)
	{
		taskNumber = getUserSelectedTask(3);
		switch (taskNumber)
		{
		case 1: Task1();
			break;
		case 2: Task2();
			break;
		case 3: Task3();
			break;
		}
		cout << endl;
	}
}