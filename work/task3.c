#include <stdio.h>
#include "task3a.h"

int getMaxWord(char buf[], char word[])
{
	int i = 0, j = 0, len = 0, count = 0, maxWord = 0;
	int inWord = OUT;

	while (buf[i])
	{
		if (buf[i] != ' ' && inWord == OUT)
		{
			inWord = IN;
			len = 1;
			j = i;
		}

		else if (buf[i] != ' ' && inWord == IN)
			len++;

		else if (buf[i] == ' ' && inWord == IN) 
		{
			inWord = OUT;

			if (len > maxWord)
			{
				maxWord = len;
				for (int i = 0; i < maxWord; i++)
					word[i] = buf[j++];
				word[i] = '\0';
			}

			len = 0;
		}
		if (strlen(word) == maxWord - 1)
			printf("%s", word);
	    i++;
	}
	return maxWord;
}
	
