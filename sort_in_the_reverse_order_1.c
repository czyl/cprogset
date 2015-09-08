//Name: sort_in_the_reverse_order.c
//Purpose: 将数组a中的n个数按相反顺序列出

#include <stdio.h>
#define N 10
int main()
{
	int a[N], *p, b[N], i=0;

	printf("Enter %d numbers: ", N);
	for (p=a; p<a+N; p++)
		scanf("%d",p);

	printf("In reverse order:");
	for (p=a+N-1; p>=a; p--,i++)
		b[i]=*p;

	for (i=0;i<N;i++)
		printf(" %d",b[i]);
		
	printf("\n");

	return 0;
}
