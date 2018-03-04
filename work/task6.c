#include "task6.h"

int getSumMinMax(int buf[], int SIZE)
{
	int i = 0, j = 0, min=0, max=0, sum = 0;
	
	for (int i = 0; i < SIZE; i++) 
	{
		if (buf[i] < buf[min])
			min = i;
	}

	for (int j = 0; j < SIZE; j++) 
	{
		if (buf[j] > buf[max])
			max=j;
	}

	if (max > min)               //если максимальный стоит раньше минимального
	{
		for (i = min + 1; i < max; i++)
			sum = sum + buf[i];
	}

	if (min > max)               //если минимальный стоит раньше максимального  
	{
		for (i = max + 1; i < min; i++)
			sum = sum + buf[i];
	}
		
	return sum;
}