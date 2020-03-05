#include<stdio.h>
int Leap(int iNumber1,int iNumber2);
int Day3(int iNumber1,int iNumber2,int iNumber3);
int Day4(int iNumber1,int iNumber2,int iNumber3);
int Leap2(int iNumber);
int main()
{
	int Year1,Month1,Day1,Year2,Month2,Day2,a,b,c,d;
	printf("请输入您的出生年份:\n"); scanf("%d",&Year1);
	printf("请输入您的出生月份:\n"); scanf("%d",&Month1);
	printf("请输入您的出生日期:\n"); scanf("%d",&Day1);
	printf("请输入现在的年份:\n"); scanf("%d",&Year2);
	printf("请输入现在是几月:\n"); scanf("%d",&Month2);
	printf("请输入现在是多少号:\n"); scanf("%d",&Day2);
	//计算公式为：（测定年-出生年）×365+闰年数-（1月1日至生日天数）+（1月1日至测定天数）。
	//所得天数即是经历总天数，再分别除以23天、28天、33天，所得余数分别为体力、情绪、智力三个节律情况。
	a=Leap(Year1,Year2);//计算闰年数。
	b=Day3(Month1,Day1,Year1);
	c=Day3(Month2,Day2,Year2);
	d=(Year2-Year1)*365+a-b+c;
	//求出总天数。
	switch(d % 23)
	{
	case 0:
		printf("您的体力节律处于周期日");
			break;
	case 1:
		printf("您的体力节律处于高潮期");
			break;
	case 2:
		printf("您的体力节律处于高潮期");
			break;
	case 3:
		printf("您的体力节律处于高潮期");
			break;
	case 4:
		printf("您的体力节律处于高潮期");
			break;
	case 5:
		printf("您的体力节律处于高潮期");
			break;
	case 6:
		printf("您的体力节律处于高潮期");
			break;
	case 7:
		printf("您的体力节律处于高潮期");
			break;
	case 8:
		printf("您的体力节律处于高潮期");
			break;
	case 9:
		printf("您的体力节律处于高潮期");
			break;
	case 10:
		printf("您的体力节律处于高潮期");
			break;
	case 11:
		printf("您的体力节律处于高潮期");
			break;
	case 12:
		printf("您的体力节律处于临界日");
			break;
	case 13:
		printf("您的体力节律处于低潮期");
			break;
	case 14:
		printf("您的体力节律处于低潮期");
			break;
	case 15:
		printf("您的体力节律处于低潮期");
			break;
	case 16:
		printf("您的体力节律处于低潮期");
			break;
	case 17:
		printf("您的体力节律处于低潮期");
			break;
	case 18:
		printf("您的体力节律处于低潮期");
			break;
	case 19:
		printf("您的体力节律处于低潮期");
			break;
	case 20:
		printf("您的体力节律处于低潮期");
			break;
	case 21:
		printf("您的体力节律处于低潮期");
			break;
	case 22:
		printf("您的体力节律处于低潮期");
			break;
	}
    switch(d % 28)
	{
	case 0:
		printf("您的情绪节律处于周期日");
			break;
	case 1:
		printf("您的情绪节律处于高潮期");
			break;
	case 2:
		printf("您的情绪节律处于高潮期");
			break;
	case 3:
		printf("您的情绪节律处于高潮期");
			break;
	case 4:
		printf("您的情绪节律处于高潮期");
			break;
	case 5:
		printf("您的情绪节律处于高潮期");
			break;
	case 6:
		printf("您的情绪节律处于高潮期");
			break;
	case 7:
		printf("您的情绪节律处于高潮期");
			break;
	case 8:
		printf("您的情绪节律处于高潮期");
			break;
	case 9:
		printf("您的情绪节律处于高潮期");
			break;
	case 10:
		printf("您的情绪节律处于高潮期");
			break;
	case 11:
		printf("您的情绪节律处于高潮期");
			break;
	case 12:
		printf("您的情绪节律处于高潮期");
			break;
	case 13:
		printf("您的情绪节律处于高潮期");
			break;
	case 14:
		printf("您的情绪节律处于临界日");
			break;
	case 15:
		printf("您的情绪节律处于低潮期");
			break;
	case 16:
		printf("您的情绪节律处于低潮期");
			break;
	case 17:
		printf("您的情绪节律处于低潮期");
			break;
	case 18:
		printf("您的情绪节律处于低潮期");
			break;
	case 19:
		printf("您的情绪节律处于低潮期");
			break;
	case 20:
		printf("您的情绪节律处于低潮期");
			break;
	case 21:
		printf("您的情绪节律处于低潮期");
			break;
	case 22:
		printf("您的情绪节律处于低潮期");
			break;
	case 23:
		printf("您的情绪节律处于低潮期");
			break;
	case 24:
		printf("您的情绪节律处于低潮期");
			break;
	case 25:
		printf("您的情绪节律处于低潮期");
			break;
	case 26:
		printf("您的情绪节律处于低潮期");
			break;
	case 27:
		printf("您的情绪节律处于低潮期");
			break;
	}
    switch(d % 33)
	{
	case 0:
		printf("您的智力节律处于周期日");
			break;
	case 1:
		printf("您的智力节律处于高潮期");
			break;
	case 2:
		printf("您的智力节律处于高潮期");
			break;
	case 3:
		printf("您的智力节律处于高潮期");
			break;
	case 4:
		printf("您的智力节律处于高潮期");
			break;
	case 5:
		printf("您的智力节律处于高潮期");
			break;
	case 6:
		printf("您的智力节律处于高潮期");
			break;
	case 7:
		printf("您的智力节律处于高潮期");
			break;
	case 8:
		printf("您的智力节律处于高潮期");
			break;
	case 9:
		printf("您的智力节律处于高潮期");
			break;
	case 10:
		printf("您的智力节律处于高潮期");
			break;
	case 11:
		printf("您的智力节律处于高潮期");
			break;
	case 12:
		printf("您的智力节律处于高潮期");
			break;
	case 13:
		printf("您的智力节律处于高潮期");
			break;
	case 14:
		printf("您的智力节律处于高潮期");
			break;
	case 15:
		printf("您的智力节律处于高潮期");
			break;
	case 16:
		printf("您的智力节律处于高潮期");
			break;
	case 17:
		printf("您的智力节律处于临界日");
			break;
	case 18:
		printf("您的智力节律处于低潮期");
			break;
	case 19:
		printf("您的智力节律处于低潮期");
			break;
	case 20:
		printf("您的智力节律处于低潮期");
			break;
	case 21:
		printf("您的智力节律处于低潮期");
			break;
	case 22:
		printf("您的智力节律处于低潮期");
			break;
	case 23:
		printf("您的智力节律处于低潮期");
			break;
	case 24:
		printf("您的智力节律处于低潮期");
			break;
	case 25:
		printf("您的智力节律处于低潮期");
			break;
	case 26:
		printf("您的智力节律处于低潮期");
			break;
	case 27:
		printf("您的智力节律处于低潮期");
			break;
	case 28:
		printf("您的智力节律处于低潮期");
			break;
	case 29:
		printf("您的智力节律处于低潮期");
			break;
	case 30:
		printf("您的智力节律处于低潮期");
			break;
	case 31:
		printf("您的智力节律处于低潮期");
			break;
	}
	return 0;


}
int Leap(int iNumber1,int iNumber2)
{
	int leap,a,i;
	for(i=iNumber1;i<=iNumber2-iNumber1;i++)
	{
		if(i % 4 == 0)
		{if(i % 100 == 0)
		{if(i % 400 == 0)
				{leap=1;}
		else
				{leap=0;}
		}
		else{leap=1;}
		}
		else
			{leap=0;}
		if(leap==1)
		{a=a+1;}
	}
	return a;
}
int Day3(int iNumber1,int iNumber2,int iNumber3)
{
	int a,feb;//定义一个含有二月天数的量。
	if(Leap2(iNumber3)==1){feb=60;}
	else{feb=59;}
	a=iNumber2;
	switch(iNumber1)
	{case 1:break;
	case 2:a=a+31;break;
	case 3:a=a+feb;break;
	case 4:a=a+31+feb;break;
	case 5:a=a+30+31+feb;break;
	case 6:a=a+31+30+31+feb;break;
	case 7:a=a+30+31+30+31+feb;break;
	case 8:a=a+31+30+31+30+31+feb;break;
	case 9:a=a+31+31+30+31+30+31+feb;break;
	case 10:a=a+30+31+31+30+31+30+31+feb;break;
	case 11:a=a+31+30+31+31+30+31+30+31+feb;break;
	case 12:a=a+30+31+30+31+31+30+31+30+31+feb;break;
	}
	return a;
}
int Leap2(int iNumber)
{
	int a,i=iNumber;
	
		if(i % 4 == 0)
		{if(i % 100 == 0)
		{if(i % 400 == 0)
				{a=1;}
		else
				{a=0;}
		}
		else{a=1;}
		}
		else
			{a=0;}
return a;
}
int Day4(int iNumber1,int iNumber2,int iNumber3)
{
	int a,feb;//定义一个含有二月天数的量。
	if(Leap2(iNumber3)==1)
	{feb=60;}
	else
	{feb=59;}
	a=iNumber2;
	switch(iNumber1)
	{case 1:break;
	case 2:a=a+31;break;
	case 3:a=a+feb+31;break;
	case 4:a=a+31+feb+31;break;
	case 5:a=a+30+31+feb+31;break;
	case 6:a=a+31+30+31+feb+31;break;
	case 7:a=a+30+31+30+31+feb+31;break;
	case 8:a=a+31+30+31+30+31+feb+31;break;
	case 9:a=a+31+31+30+31+30+31+feb+31;break;
	case 10:a=a+30+31+31+30+31+30+31+feb+31;break;
	case 11:a=a+31+30+31+31+30+31+30+31+feb+31;break;
	case 12:a=a+30+31+30+31+31+30+31+30+31+feb+31;break;
	}
	return a;
}
