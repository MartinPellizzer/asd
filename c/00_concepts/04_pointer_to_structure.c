/*
	NOTES:
		pointers always takes INT bytes
*/

#include <stdio.h>
#include <stdlib.h>

struct Rectangle
{
	int length;
	int breadth;
};

int main(void)
{
	struct Rectangle r = {10, 5};
	struct Rectangle *p = &r;

	r.length = 15;

	// (*p).length = 20;
	p->length = 20;	

	// dynamic structures
	struct Rectangle *p1;
	p1 = (struct Rectangle*) malloc(sizeof(struct Rectangle));
	p1->length = 10;
	p1->breadth = 5;

	return 0;
}
