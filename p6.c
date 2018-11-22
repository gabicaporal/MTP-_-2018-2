/* P6.c */
/* Gabriela Caporal Mostaceros */
/* 11811EBI024 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct pont
{
	double x;
	double y;
};

struct pont *gerar (int k)
{
	struct pont *p = (struct pont*) malloc(k*sizeof(struct pont));
	int i;
	printf ("\n\nPontos gerados sao: \n");
	for (i=0; i<k; i++)
	{
		(*p).x = cos(i*2.0*M_PI/(k-1));
		(*p).y = sin(i*2.0*M_PI/(k-1));
		printf ("(%.3lf, %.3lf) \n", (*p).x, (*p).y);
	}
	return p;
}

int main ()
{
	struct pont *p;
	int k;
	printf ("Numero de pontos que deseja encontrar: ");
	scanf ("%d", &k);
	getchar();
	p = gerar(k);
	free(p);
	return 0;
}
