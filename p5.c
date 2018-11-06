/* P5.c */
/* Gabriela Caporal Mostaceros */
/* 11811EBI024 */

#include <stdio.h>

typedef
	unsigned long long int
Bytes8;

typedef
	struct LCG { Bytes8 a, c, m, rand_max, atual;}
LCG;

void semente(LCG * r, Bytes8 seed) 
{
	r->a = 0x5DEECE66DULL;
	r->c = 11ULL;
	r->m = (1ULL << 48);
	r->rand_max = r->m - 1;
	r->atual = seed;
}

Bytes8 lcg_rand(LCG * r) 
{
	r->atual = (r->a * r->atual + r->c) % r->m;
	return r->atual;
}

double lcg_rand_01(LCG * r) 
{
	return ((double) lcg_rand(r))/(r->rand_max);
}

void gera_numeros(float * vetor, int tam, float min, float max, LCG * r) 
{
	int i;
	for(i = 0; i < tam; i++)
		vetor[i] = (max-min)*lcg_rand_01(r) + min;
}

float adicao(float *inicio_vetor, float *fim_vetor)
{
	while (inicio_vetor != fim_vetor + 1) 
		return (*inicio_vetor + adicao(inicio_vetor + 1, fim_vetor));
	return 0;
}

float prod(float *inicio_vetor, float *fim_vetor)
{
	while (inicio_vetor != fim_vetor + 1) 
		return (*inicio_vetor * prod(inicio_vetor + 1, fim_vetor));
	return 1;	
}

int main()
{
	LCG random;
   	semente(&random, 123456);
	
	int op;
	float numeros[50];
	
	gera_numeros(numeros, 50, 0.5, 1.5, &random);
	
	do
	{
		printf ("50 numeros aleatorios foram gerados. Voce gostaria de fazer um: \
		\n\n1) Soma dos numeros gerados? \n2) Produto ndos numeros gerados? \n3) Sair do programa. \n\n");
		scanf ("%d", &op);
		switch (op)
		{
			case 1:
				printf ("\nA soma e %.6f \n\n", adicao (&numeros[0], &numeros[49]));
				break;
			case 2:
				printf ("\nO produto e %g \n\n", prod (&numeros[0], &numeros[49]));
				break;	
			default:
				if (op != 3)
					printf ("\nOpcao invalida! \n\n");
		}	
	} while (op != 3);
	return 0;
}
