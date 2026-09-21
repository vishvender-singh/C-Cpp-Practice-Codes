
#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
	clrscr();
	char st1[20]="ram",st2[20]="vishvender";
	int i,j,len1=0,len2=0,k;
	len1=strlen(st1);
	len2=strlen(st2);
	while(len2>1)
	{
	k=0;
	for(;k<len1-1;k++)
	{
	if(k==len2)
	{
	k=0;
	}
	}
	for(j=k;j<len2-1;j++)
	{
	st2[j]=st2[j+1];
	}
	st2[j]='\0';
	len2--;
	}
	cout<<endl<<st2;
	cout<<len1;
	getch();
	}