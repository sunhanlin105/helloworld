#include<stdio.h>
int main()
{
	int  x,y;
	printf("请输入长方形的长和宽");
	scanf("%d,%d",&x,&y ); 
	printf("该长方形的周长为%d,面积为%d",2*(x+y), x*y);
	return 0;
} 
