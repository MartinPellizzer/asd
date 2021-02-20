#include<stdio.h>

int main()
{
	int arr[5] = {2, 4, 6, 8};
	printf("%d\n", arr[0]);
	printf("%d\n", &arr[1]);
	printf("%d\n", (arr + 2));
	printf("%d\n", *(arr + 3));
	printf("%d\n", arr[4]);

	return 0;
}


