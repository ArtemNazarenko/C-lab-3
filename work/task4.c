#include <ctype.h>
#include "task4.h"

int getSum(char buf[])
{
	unsigned int value = 0;  // ��� �������� �� char � int (��������� �����)
	int count = 0; // ������� ���������� ���� � �����
	unsigned int sum = 0; // ��� ������������ ���������� �����
	int i = 0;
	
	while(buf[i])
	{
		if (!isdigit(buf[i]))
		{
			i++;
			continue;
		}
		while (isdigit(buf[i]))
		{
			value = value * 10 + buf[i] - '0';
			count++;
			i++;
			if (count == 9)
			{
				
				break;
			}
		}
		sum += value;
		value = 0;
		count = 0;
	}
	return sum;
}