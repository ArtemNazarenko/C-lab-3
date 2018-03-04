#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include "task5.h"
#define SIZE 5

//Написать программу, которая формирует целочисленный массив размера N,
//а затем находит сумму элементов, расположенным между первым отрицательным
//и последним положительным элементами.
//Массив заполняется случайными числами : отрицательными и положительными поровну(или почти поровну...)

int main()
{
	setlocale(LC_ALL, "Rus");
	int buf[SIZE] = { 0 };
	srand(time(0));

	for (int i = 0; i < SIZE; i++)
	{
		if (rand() % 10 == 0)
			buf[i] = rand() % 10;
		else
			buf[i] = -rand() % 10;

		printf("%d ", buf[i]);
	}
	printf("\nСумма элементов, расположенных между первым отрицательным и последним положительным элементами равна = %d\n", getSum(buf, SIZE));
	system("pause");
	return 0;







}