#include<stdio.h>
void main()
{
	int i;
	int j;
	int stmt_1=(i>j);
	
	printf("the value of i:");
	scanf("%d",&i);

 	printf("the value of j:");
	scanf("%d",&j);

	int stmt_2=!(i>j);
	printf("output :%d\n",stmt_2);
}

	