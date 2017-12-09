/* ���������, ������� �������� ������� ������������� 
   �������� ��� �������� ������, ��������������� �� �������� �������
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 1000 //���-�� �������� � ������
#define N 95 //���-�� �������� ��� ����� ������������ (� 32 �� 126 = 95)


int main()
{
	int i;
	char line[SIZE];  //������, �������� �������������
	char symbols[N];  //������ ������������ ��������
	int count[N] = { 0 }; //������ ���������� (������� ��� ���������� ������ ������

	//�������� ������ ��� ����������:
	printf("Enter the string: \n");
	fgets(line, SIZE, stdin);
	line[strlen(line)-1] = '\0';  //�������� \n
	printf("\n");

	i = 0;
	while (line[i])   //while (buf[i] != '\0')
	{
		count[line[i] - ' ']++;
		i++;
	}


	/*
		//����� �������� � ������������� ��� �������������� (��� ��������):
		for (i = 0; i < N; i++)
		{
			if (count[i] > 0)
				printf("%c - %d\n", i + ' ', count[i]);
		}
		printf("\n");
	*/

	// �������� ������� symbols[]:
	for (i = 0; i < N; i++)
		symbols[i] = (i + ' ');

	//���������� �� ��������:
	for (int i = 1; i < N; i++)
	{
		int j;
		int c;  // ��������������� ���������� ��� �������� �������� �������
		char s;  // ��������������� ���������� ��� �������� �������� �������
		c = count[i];
		s = symbols[i];
		j = i - 1;
		while (c > count[j])
		{
			count[j + 1] = count[j];
			count[j] = c;
			symbols[j + 1] = symbols[j];
			symbols[j] = s;
			j--;
			if (j < 0)
				break;
		}
	}

	//����� ������� �������������, ��������������� �� ��������:
	for (i = 0; i < N; i++)
	{
		if (count[i] > 0)
			printf("%c - %d\n", symbols[i], count[i]);
	}
	printf("\n");

	return 0;
}