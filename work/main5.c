/*   ���������, ������� ��������� ������������� ������ ������� N, 
     � ����� ������� ����� ���������, 
	 ������������� ����� ������ ������������� 
	 � ��������� ������������� ����������.
	 ������ ����������� ���������� �������: 
	 �������������� � �������������� ������� (��� ����� �������...)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task5.h"
#define N 30
#define TRANSFER 15 //���-�� ��������, ����� ������� ������ ��� ������ ��������� �� ����� ������

int main()
{
	srand(time(0));
	int arr[N];

	for (int i = 0; i < N; i++)
	{
		switch (rand() % 2)
		{
		case 0:
		{
			arr[i] = rand() % 100;
		}
		break;
		case 1:
		{
			arr[i] = -(rand() % 100);
		}
		break;
		}
	}

	printf("Array: \n");
	for (int i = 0, count = 1; i < N; i++, count++)
	{
		printf("%4d ", arr[i]);
		if (count % TRANSFER == 0)
			printf("\n");
	}
		
	printf("\n\n");

	printf("The sum of the elements, located between \n"
		"the first negative and last positive elements: %d \n\n", getSumInt(arr, N));

	return 0;
}