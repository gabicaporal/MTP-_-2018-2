/* P3.c */
/* Gabriela Caporal Mostaceros */
/* 11811EBI024 */


#include<stdio.h>

int main ()
{
	char v[25];
	int i, y=0;
	scanf("%s", v);
	for (i=0; v[i] != '\0'; i++)
		if (v[i] >= 48 && v[i] <= 57)
		{
			y = y*10 + (v[i] - '0');
		}
	printf("%d", y);
	return 0;
}
