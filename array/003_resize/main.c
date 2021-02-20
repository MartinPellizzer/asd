#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *p = (int*) malloc(5 * sizeof(int));
	int *q = (int*) malloc(10 * sizeof(int));

	p[0] = 2;	
	p[1] = 4;	
	p[2] = 6;	
	p[3] = 8;	
	p[4] = 10;	

	for(int i = 0; i < 5; i++)
		q[i] = p[i];
	
	free(p);
	p = q;
	q = NULL;

	p[5] = 11;
	p[6] = 13;
	p[7] = 15;
	p[8] = 17;
	p[9] = 19;

	for(int i = 0; i < 10; i++)
		printf("%d\n", p[i]);

	return(0);
}
