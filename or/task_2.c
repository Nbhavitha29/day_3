#include<stdio.h>
int main()
{
	int a=34;
	int b=56;
 	int stmt_1=(a<=b);
	printf("stmt_1:%d\n",stmt_1);
	
	int stmt_2=(a>=b);
	printf("stmt_2:%d\n",stmt_2);

	printf("stmt_1 || stmt_2:%d",(a<=b) || a>=b);
return 1;
}