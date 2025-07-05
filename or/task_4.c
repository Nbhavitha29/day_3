#include<stdio.h>
int main()
{
	int w=0;
	int s=1;
 	int stmt_1=(w==s);
	printf("0stmt_1:%d\n",stmt_1);
	
	int stmt_2=(w>=s);
	printf("stmt_2:%d\n",stmt_2);

	printf("stmt_1 || stmt_2:%d",(w==s) || w>=s);
return 1;
}