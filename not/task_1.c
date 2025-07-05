#include<stdio.h>
int main()
{
	int r=12345;
	float f=678.90;
	
	printf("stmt_1:%d\n",r<f);
 	int stmt_2=!(r<f);

	printf("output =%d",stmt_2);
return 0;
}
