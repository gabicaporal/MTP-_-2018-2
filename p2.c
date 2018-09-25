/* p2.c */
/* Gabriela Caporal Mostaceros */
/* 11811EBI024 */

#include <stdio.h>

int potencia (int n1, int n2)
{
	int i, r = 1;
	for (i=0; i<n2; i++)
		r = r * n1;
	return r;
}

void inverte (char vet[])
{
	int aux = 0, i, cont = 0, conttotal = 0;
	for (i=0; vet[i] != '\0'; i++)
		cont++;
	conttotal = cont;
	cont--;
	for (i=0; i<cont; i++)
	{
		aux = vet[i];
		vet[i] = vet[cont];
		vet[cont] = aux;
		cont--;
	}
	vet[conttotal] = '\0';
}

int bd (char num[])
{
	inverte(num);
	int i, soma = 0;
	for (i = 0; num[i] != '\0'; i++)
		if (num[i] == '1')
			soma = soma + num[i] * potencia(2, i);
	return soma/49;
}

void db (int num)
{
	int vet[256], i, j, r, m=0;
	r = num;
	for (i=0; m<1 ; i++)
	{
		vet[i] = r % 2;
		r = r/2;
		if (r == 1 || r == 0)
		{
			vet[i+1] = r;
			j=i+1;
			m++;
		}
	}
	printf ("O valor em binario e ");
	for (i=j; i>=0; i--)
		printf ("%d", vet[i]);
}


int main()
{
	int op;
	char num[256];
	printf ("MENU DE OPCOES \n1) Binario para decimal \n2) Binario para hexadecimal \
	\n3) Hexadecimal para decimal \n4) Hexadecimal para binario \n5) Decimal para binario \
	\n6) Decimal para hexadecimal \n7) Octal para decimal \n8) Decimal para octal");
	printf ("\n\nDigite sua opcao: ");
	scanf ("%d", &op);
	if(op==1)
	{
		printf ("Numero em binario: ");
		scanf ("%s", num);
		printf ("Em decimal e %d", bd(num));
	}
	if(op==2)
	{
		printf ("Numero em binario: ");
		scanf ("%s", num);
		printf ("Em hexadecimal e %x", bd(num));
	}
	if(op==3)
	{
		int(num);
		printf ("Numero em hexadecimal: ");
		scanf ("%x", &num);
		printf ("Em decimal e %d", num);
	}
	if(op==4)
	{
		int(num);
		printf ("Numero em hexadecimal: ");
		scanf ("%x", &num);
		db(num);
	}
	if(op==5)
	{
		int(num);
		printf ("Numero em decimal: ");
		scanf("%d", &num);
		db(num);
	}
	if(op==6)
	{
		int(num);
		printf ("Numero em decimal: ");
		scanf("%d", &num);
		printf ("Em hexadecimal e %x", num);
	}
	if(op==7)
	{
		int(num);
		printf ("Numero em octal: ");
		scanf("%o", &num);
		printf("Em decimal e %d", num);
	}		
	if(op==8)
	{
		int(num);
		printf ("Numero em decimal: ");
		scanf("%d", &num);
		printf ("Em octal e %o", num);
	}
	return 0;
}
