﻿// Lab_02.cpp
// Автор: Ткачишин Юрій.
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 17.

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double m; // вхідний параметр
	double n; // вхідний параметр
	double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу
	cout << "m = "; cin >> m;
	cout << "n = "; cin >> n;
	z1 = (sqrt(((3.0 * m + 2.0)*(3.0 * m + 2.0) - (24.0 * m)))/((3.0 * sqrt(m))-((2.0)/(sqrt(m)))));	
	z2 = sqrt(m);
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
} //It`s test commit.
//2nd commit change. Hello there.