#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <Windows.h>
int Function(int x);
int main()
{	
	void Fuction(int x);
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int x = NULL;
	printf("Введите число: ");
	scanf_s("%d", &x);
	x = Function(x);
	printf("Квадрат введенного числа равен %d", x);
	return 0;
}
int Function(int x)
{
	return x * x;
}