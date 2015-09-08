//Name: printarray.c
//Purpose: 用指针变量输出二维数组中的元素

#include <stdio.h>

int main()
{
	int a[3][4]={{1,3,5,7},{2,4,6,8},{9,10,11,12}};
	int *p;
	for(p=a[0];p<a[0]+12;p++){
		if((p-a[0])%4 == 0)
			printf("\n");
		printf("%4d",*p);
	}

	return 0;
}
