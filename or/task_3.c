#include<stdio.h>
int main()
{
	int x=5;
	int y=20;
 	int stmt_1=(x<y);
	printf("stmt_1:%d\n",stmt_1);
	
	int stmt_2=(y>x);
	printf("stmt_2:%d\n",stmt_2);

	printf("stmt_1 || stmt_2:%d",(x<y) || y>x);
return 1;
}