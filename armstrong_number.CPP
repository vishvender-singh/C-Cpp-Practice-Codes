#include<stdio.h>
#include<conio.h>
void main()
{
	int cube,digit,num,num2,count=0,sum=0,i,arm=1;
	clrscr();
	printf("enter a no ");
	scanf("%d",&num);
	num2=num;
	while(num!=0)
	{
	count++;
	num=num/10;
	}
	num=num2;
	while(num!=0)
	{
		digit=num%10;
		arm=1;
		for(i=1;i<=count;i++)
		{
		arm=digit*arm;
		}
		sum=sum+arm;
		num=num/10;
	}
	if(sum==num2)
	{
	printf("\n it is armstrong no ");
	}
	else
	{
	printf("\n it is not  armstrong no");
	}
	getch();
    }