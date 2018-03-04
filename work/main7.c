#include<stdio.h>
#include<string.h>
#include <locale.h>
#include<stdlib.h>
#define size 200

int main()
{
	setlocale(LC_ALL, "Rus");
	int i = 0, k = 0, j = 0;
	int count_max = 0;
	int max = 0;
	char symbol = 0;

	char buf[size], count[size] = { 0 };

	printf("¬ведите текст: ");
	fgets(buf, size, stdin);
	buf[strlen(buf) - 1] = ' ';

	while (buf[i] != '\0')
	{
		count[buf[i]-'a']++;
		i++;
	}

	//счетчик букв (какие буквы есть в строке)
	for (int j = 0; j < size; j++)
	{
		if (count[j] > 0)
			count_max++;
	}



	while (k < count_max)
	{
		for (int i = 0; i < size; i++)
		{
			if (count[i] > 0)
			{
				if (count[i] > max)
				{
					max = count[i];
					symbol = i;
				}
			}
		}
		printf("%c - %d\n", symbol+'a', max);
		count[symbol] = 0;
		max = 0;
		k++;
	}
	system("pause");
	return 0;
}