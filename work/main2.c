#define _CTR_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>

#define IN 1
#define OUT 0

#define SIZE 256

/*�������� ���������, ������� ��� �������� ������ ���������� ���������� ����
            � ������� ������ ����� �� ��������� ������ � ��� ����� */

int main()
{
	setlocale(LC_ALL, "Rus");

	int i = 0, j = 0;
	int lenWord = 0, countWord = 0, inWord = OUT;
	char buf[SIZE], word[SIZE];

	printf("������� �����: \n");
	fgets(buf, SIZE, stdin);
	buf[strlen(buf) - 1] = ' ';
	printf("\n");

	while (buf[i])
	{
		if (buf[i] != ' ' && inWord == OUT)
		{
			inWord = IN;
			lenWord++;
			word[j++] = buf[i++];
		}
		if (buf[i] != ' ' && inWord == IN)
		{
			word[j++] = buf[i];
			lenWord++;
		}
		if (buf[i] == ' ' && inWord == IN)
		{
			inWord = OUT;
			word[j] = '\0';
			printf("%s ����� %d ����\n", word, lenWord);
			j = 0, lenWord = 0;
			countWord++;
		}
		i++;
	}
	printf("\n���������� ���� � ����� ������ ��������� %d \n\n", countWord);

	system("pause");
	return 0;
}