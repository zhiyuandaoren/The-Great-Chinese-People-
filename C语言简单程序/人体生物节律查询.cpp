#include<stdio.h>
int Leap(int iNumber1,int iNumber2);
int Day3(int iNumber1,int iNumber2,int iNumber3);
int Day4(int iNumber1,int iNumber2,int iNumber3);
int Leap2(int iNumber);
int main()
{
	int Year1,Month1,Day1,Year2,Month2,Day2,a,b,c,d;
	printf("���������ĳ������:\n"); scanf("%d",&Year1);
	printf("���������ĳ����·�:\n"); scanf("%d",&Month1);
	printf("���������ĳ�������:\n"); scanf("%d",&Day1);
	printf("���������ڵ����:\n"); scanf("%d",&Year2);
	printf("�����������Ǽ���:\n"); scanf("%d",&Month2);
	printf("�����������Ƕ��ٺ�:\n"); scanf("%d",&Day2);
	//���㹫ʽΪ�����ⶨ��-�����꣩��365+������-��1��1��������������+��1��1�����ⶨ��������
	//�����������Ǿ������������ٷֱ����23�졢28�졢33�죬���������ֱ�Ϊ�����������������������������
	a=Leap(Year1,Year2);//������������
	b=Day3(Month1,Day1,Year1);
	c=Day3(Month2,Day2,Year2);
	d=(Year2-Year1)*365+a-b+c;
	//�����������
	switch(d % 23)
	{
	case 0:
		printf("�����������ɴ���������");
			break;
	case 1:
		printf("�����������ɴ��ڸ߳���");
			break;
	case 2:
		printf("�����������ɴ��ڸ߳���");
			break;
	case 3:
		printf("�����������ɴ��ڸ߳���");
			break;
	case 4:
		printf("�����������ɴ��ڸ߳���");
			break;
	case 5:
		printf("�����������ɴ��ڸ߳���");
			break;
	case 6:
		printf("�����������ɴ��ڸ߳���");
			break;
	case 7:
		printf("�����������ɴ��ڸ߳���");
			break;
	case 8:
		printf("�����������ɴ��ڸ߳���");
			break;
	case 9:
		printf("�����������ɴ��ڸ߳���");
			break;
	case 10:
		printf("�����������ɴ��ڸ߳���");
			break;
	case 11:
		printf("�����������ɴ��ڸ߳���");
			break;
	case 12:
		printf("�����������ɴ����ٽ���");
			break;
	case 13:
		printf("�����������ɴ��ڵͳ���");
			break;
	case 14:
		printf("�����������ɴ��ڵͳ���");
			break;
	case 15:
		printf("�����������ɴ��ڵͳ���");
			break;
	case 16:
		printf("�����������ɴ��ڵͳ���");
			break;
	case 17:
		printf("�����������ɴ��ڵͳ���");
			break;
	case 18:
		printf("�����������ɴ��ڵͳ���");
			break;
	case 19:
		printf("�����������ɴ��ڵͳ���");
			break;
	case 20:
		printf("�����������ɴ��ڵͳ���");
			break;
	case 21:
		printf("�����������ɴ��ڵͳ���");
			break;
	case 22:
		printf("�����������ɴ��ڵͳ���");
			break;
	}
    switch(d % 28)
	{
	case 0:
		printf("�����������ɴ���������");
			break;
	case 1:
		printf("�����������ɴ��ڸ߳���");
			break;
	case 2:
		printf("�����������ɴ��ڸ߳���");
			break;
	case 3:
		printf("�����������ɴ��ڸ߳���");
			break;
	case 4:
		printf("�����������ɴ��ڸ߳���");
			break;
	case 5:
		printf("�����������ɴ��ڸ߳���");
			break;
	case 6:
		printf("�����������ɴ��ڸ߳���");
			break;
	case 7:
		printf("�����������ɴ��ڸ߳���");
			break;
	case 8:
		printf("�����������ɴ��ڸ߳���");
			break;
	case 9:
		printf("�����������ɴ��ڸ߳���");
			break;
	case 10:
		printf("�����������ɴ��ڸ߳���");
			break;
	case 11:
		printf("�����������ɴ��ڸ߳���");
			break;
	case 12:
		printf("�����������ɴ��ڸ߳���");
			break;
	case 13:
		printf("�����������ɴ��ڸ߳���");
			break;
	case 14:
		printf("�����������ɴ����ٽ���");
			break;
	case 15:
		printf("�����������ɴ��ڵͳ���");
			break;
	case 16:
		printf("�����������ɴ��ڵͳ���");
			break;
	case 17:
		printf("�����������ɴ��ڵͳ���");
			break;
	case 18:
		printf("�����������ɴ��ڵͳ���");
			break;
	case 19:
		printf("�����������ɴ��ڵͳ���");
			break;
	case 20:
		printf("�����������ɴ��ڵͳ���");
			break;
	case 21:
		printf("�����������ɴ��ڵͳ���");
			break;
	case 22:
		printf("�����������ɴ��ڵͳ���");
			break;
	case 23:
		printf("�����������ɴ��ڵͳ���");
			break;
	case 24:
		printf("�����������ɴ��ڵͳ���");
			break;
	case 25:
		printf("�����������ɴ��ڵͳ���");
			break;
	case 26:
		printf("�����������ɴ��ڵͳ���");
			break;
	case 27:
		printf("�����������ɴ��ڵͳ���");
			break;
	}
    switch(d % 33)
	{
	case 0:
		printf("�����������ɴ���������");
			break;
	case 1:
		printf("�����������ɴ��ڸ߳���");
			break;
	case 2:
		printf("�����������ɴ��ڸ߳���");
			break;
	case 3:
		printf("�����������ɴ��ڸ߳���");
			break;
	case 4:
		printf("�����������ɴ��ڸ߳���");
			break;
	case 5:
		printf("�����������ɴ��ڸ߳���");
			break;
	case 6:
		printf("�����������ɴ��ڸ߳���");
			break;
	case 7:
		printf("�����������ɴ��ڸ߳���");
			break;
	case 8:
		printf("�����������ɴ��ڸ߳���");
			break;
	case 9:
		printf("�����������ɴ��ڸ߳���");
			break;
	case 10:
		printf("�����������ɴ��ڸ߳���");
			break;
	case 11:
		printf("�����������ɴ��ڸ߳���");
			break;
	case 12:
		printf("�����������ɴ��ڸ߳���");
			break;
	case 13:
		printf("�����������ɴ��ڸ߳���");
			break;
	case 14:
		printf("�����������ɴ��ڸ߳���");
			break;
	case 15:
		printf("�����������ɴ��ڸ߳���");
			break;
	case 16:
		printf("�����������ɴ��ڸ߳���");
			break;
	case 17:
		printf("�����������ɴ����ٽ���");
			break;
	case 18:
		printf("�����������ɴ��ڵͳ���");
			break;
	case 19:
		printf("�����������ɴ��ڵͳ���");
			break;
	case 20:
		printf("�����������ɴ��ڵͳ���");
			break;
	case 21:
		printf("�����������ɴ��ڵͳ���");
			break;
	case 22:
		printf("�����������ɴ��ڵͳ���");
			break;
	case 23:
		printf("�����������ɴ��ڵͳ���");
			break;
	case 24:
		printf("�����������ɴ��ڵͳ���");
			break;
	case 25:
		printf("�����������ɴ��ڵͳ���");
			break;
	case 26:
		printf("�����������ɴ��ڵͳ���");
			break;
	case 27:
		printf("�����������ɴ��ڵͳ���");
			break;
	case 28:
		printf("�����������ɴ��ڵͳ���");
			break;
	case 29:
		printf("�����������ɴ��ڵͳ���");
			break;
	case 30:
		printf("�����������ɴ��ڵͳ���");
			break;
	case 31:
		printf("�����������ɴ��ڵͳ���");
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
	int a,feb;//����һ�����ж�������������
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
	int a,feb;//����һ�����ж�������������
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
