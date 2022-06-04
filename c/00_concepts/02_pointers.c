/* 
	pointers are used to access heap memory
	pointers are used to access resources
	pointers are used to pass parameters
*/ 

#include <stdio.h>
#include <stdlib.h> 	// for malloc()

int main(void)
{
	int a = 10; 	// data variables

	int *p1;	// address variable (POINTER)
	p1 = &a;

	printf("%d", a);
	printf("%d", *p1);
	
	int *p2; 
	p2 = (int *) malloc(5 * sizeof(int)); // allocate memory in heap

	return 0;
}
