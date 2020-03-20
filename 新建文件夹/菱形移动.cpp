#include<stdio.h>
#include<stdlib.h>
void dis_space(int num);
void dis_star(int num);
int main()
{
	int i;
	for(i=0;i<20;i++)
	{
		dis_space(i+2);dis_star(1);
		dis_space(i+1);dis_star(3);
		dis_space(i);dis_star(5);
		dis_space(i+1);dis_star(3);
		dis_space(i+2);dis_star(1);
		system("cls");
	}
	return 0;
}
void dis_space(int num)
{
	int i;
	for(i=0;i<num;i++)
		printf(" ");
}
void dis_star(int num)
{
	int i;
	for(i=0;i<num;i++)
	{
		printf("*");
	}
	printf("\n");
}