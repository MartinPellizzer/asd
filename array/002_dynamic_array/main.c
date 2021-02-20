#include<stdio.h>
#include<stdlib.h>

int main()
{
	int* p = (int*) malloc(5 * sizeof(int));

	p[0] = 123;
	for(int i = 0; i < 5; i++)
		printf("%d\n", p[i]);
	
	free(p);

	return(0);
}


