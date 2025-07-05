#include<stdio.h>
int main()
{
	int m=150;
	int b=567;
 	int stmt_1=(m>=b);
	printf("stmt_1:%d\n",stmt_1);
	
	int stmt_2=(m!=b);
	printf("stmt_2:%d\n",stmt_2);

	printf("stmt_1 || stmt_2:%d",(m>=b) || m!=b);
return 1;
}