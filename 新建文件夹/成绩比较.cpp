#include<stdio.h>
int max(int a,int b,int c,int d,int e);
int main()
{
	int a[50],b,i,j;
	for(i=0;i<50;i++)
	{
		printf("please input the integer numbers:");
		scanf("%d",&a[i]);
		printf("\n");
	}
	for(j=0;j<50;j=j+5)
	{
		b=max(a[j],a[j+1],a[j+2],a[j+3],a[j+4]);
		printf("max is:%5d",b);
	}
	return 0;
}
int max(int a,int b,int c,int d,int e)
{
	int x;
	x=a>b?a:b;
	x=x>c?x:c;
	x=x>d?x:d;
	x=x>e?x:e;
	return(x);
}
