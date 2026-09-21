// wap to read a no from user and print the day according to the date:
#include<stdio.h>
#include<conio.h>
void main()
{
  int date;
  clrscr();
  printf("enter a no ");
  scanf("%d",&date);
  if(date==1 || date==8|| date==15 ||date==22 || date==29)
  {
  printf("\n today is monday");
  }
  else if(date==2 || date==9 || date==16 || date==23 || date==30)
  {
  printf("\n today is tuesday");
  }
  else if(date==3 || date==10 || date==17 || date==24 || date==31)
  {
  printf("\n today is wednesday");
  }
  else if(date==4 || date==11 || date==18 || date==25)
  {
  printf("\n today is thrusday");
  }
  else if(date==5 || date==12 || date==19 || date==26)
  {
  printf("\n today is friday");
  }
  else if(date==6 || date==13 || date==20 || date==27)
  {
  printf("\n today is saturday");
  }
 else if(date==7 || date==14 || date==21 || date==28)
  {
  printf("\n today is sunday");
  }
 else
 {
 printf("\n invalid date");
 }
 getch()
}