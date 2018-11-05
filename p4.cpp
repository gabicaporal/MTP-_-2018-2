/* P4.c */
/* Gabriela Caporal Mostaceros */
/* 11811EBI024 */

#include <stdio.h>

double f(float t, float p)
{
	if(t==0) 
		return p+1;
	else if(t>0 && p==0) 
		f(t-1,1);
	else if(t>0 && p>0) 
		f(t-1, f(t, p-1));
}

int main ()
{
	float k, i;
	scanf ("%f + %f", &k, &i);
	printf("%g + %g = %g", k, i, f(k,i));
	return 0;
}
