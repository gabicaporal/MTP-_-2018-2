/* p1.c */
/* Gabriela Caporal Mostaceros */
/* 11811EBI024 */



#include <stdio.h>

int main ()

{

	int i=0, estado=0;

	char bits[256];

	printf ("Digite a sequencia de bits: ");

	scanf("%s", bits);

	for (i=0; bits[i]!= '\0'; i++)

	{

		if (estado==0 && bits[i]=='1')

		estado=1;

		else if (estado==0 && bits[i]=='0')

		estado=0;

		else if (estado==1 && bits[i]=='1')

		estado=0;

		else if (estado==1 && bits[i]=='0')

		estado=2;

		else if (estado==2 && bits[i]=='0')

		estado=1;

		else if (estado==2 && bits[i]=='1')

		estado=2;

	}

	printf("A sequencia original e: ");

	for (i=0; bits[i]!='\0'; i++)

		printf ("%c", bits[i]);

	if (estado==0)

		printf ("\nE multiplo de 3");

	else 

		printf ("\nNao e multiplo de 3");

	return 0;

}
