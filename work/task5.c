int getSum(int buf[], int SIZE)
{
	int i=0, j=0, sum=0;
	int otr, pol;

	for (int i = 0; i < SIZE; i++)
	{
		if (buf[i] < 0)
		{
			otr = i;
			break;
		}
	}

		for (j = SIZE - 1; j < SIZE; j--)
		{
			if (buf[j] >= 0)
			{
				pol = j;
				break;
			}
		}

		for (i=otr+1; i < pol; i++)
			sum = sum + buf[i];

	return sum;
}