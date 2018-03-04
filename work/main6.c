#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include "task6.h"

#define SIZE 10

//Написать программу, которая формирует целочисленный массив размера N,
//а затем находит сумму элементов между минимальным и максимальным элементами.

int main()
{
	setlocale(LC_ALL, "Rus"); 

	int i = 0;
	int buf[SIZE];
	srand(time(0));

	for(int i=0; i<SIZE;i++)
	{
		if (rand() % 2 == 0)
			buf[i] = rand() % 10;
		else
			buf[i] = -rand() % 10;

		printf("%d ", buf[i]);
	}

	printf("\nСумма элементов между минимальным и максимальным элементами равна = %d\n", getSumMinMax(buf, SIZE));
	system("pause");
	return 0;
}