#include<stdio.h>
#define N 5
int main()
{
	int x[N] ;
	int *p = NULL;
	int max = 0;
	int min = 0;
	printf("plese input %d numbers:\n");
	for (p = &x[0]; p < &x[0] + N; ++p)
	{
		scanf_s("%d", p);
	}
	for (p = &x[1]; p < &x[0] + N; ++p)
	{
		if (*p > x[max])
			max = p-&x[0];
	} 
	for (p = &x[1]; p < &x[0] + N; ++p)
	{
		if (*p < x[min])
			min = p-&x[0];
	}
	    p = &x[0];
		printf("The max is the %d of the %d\n", *(p+max), max+1);
		printf("The min is the %d of the %d\n", *(p+min), min+1);
}