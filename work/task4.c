#include "task4.h"

int getSum(char buf[])
{
	int i = 0, value = 0, count = 0, sum = 0;
	int inMass = OUT;

	while(buf[i])
	{
		if (buf[i] <= '9' && buf[i] >= '0')
		{
			value = (10 * value) + (buf[i] - '0');
			inMass = IN;
			count++;

			if (count > MAX)
			{
				sum = sum + value;
				count = 0; value = 0;
			}
		}

		else if (inMass == IN)
		{
			sum = sum + value;
			count = 0; value = 0;
			inMass == OUT;
		}
	
		i++;
	
	}
	return sum;
}