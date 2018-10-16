/* P3.c */
/* Gabriela Caporal Mostaceros */
/* 11811EBI024 */


#include<stdio.h>

int main()
{
	char numero[256];
	int i, n_=0, n_2, k;
	printf("Digite: ");
	scanf("%s", numero);
	for(i=0; numero[i]!= '\0'; i++)
	{
		if(numero[i]>=48 && numero[i]<=57)
		{
		 	n_2 = numero[i] - 48;
			k = n_2 + n_; 
			n_ = k*10;
		}
	}
	printf("%d", k);
	return 0;
}
