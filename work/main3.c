#include <stdio.h>
#include <locale.h>
#include  "task3a.h"


int main()
{
	setlocale(LC_ALL, "Rus");
	char buf[SIZE] = { 0 }, word[SIZE] = { 0 };
	printf("¬ведите текст:\n");
	fgets(buf, SIZE, stdin);
	buf[strlen(buf) - 1] = ' ';
	int dlina = getMaxWord(buf, word);
	printf("–езультат: %s -- %d\n", word, dlina);
	system("pause");
	return 0;
}