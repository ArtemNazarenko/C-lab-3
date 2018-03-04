#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include "task1.h"

#define N 256

int main()
{
	setlocale(LC_ALL, "Rus");
	char buf[N] = { 0 };
	printf("Введите массив:\n");
	fgets(buf, N, stdin);
	buf[strlen(buf) - 1] = ' ';
	printf("В вашем массиве %d слов\n", wordCount(buf));
	system("pause");
	return 0;
}

