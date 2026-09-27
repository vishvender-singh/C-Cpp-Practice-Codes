// replace first and last character of word in string
#include <iostream.h>
#include <conio.h>
#include <string.h>
void main()
{
    clrscr();
    char str[20];
    cout << "Enter a string: ";
    cin.getline(str, 20);
    int f = 0;
    int l = 0;
    int len;
    len=strlen(str);
    for (int i=0;i<=len;i++)
     {
	if (l==0)
	{
	    f=i;
	    l=1;
	}
	else if ((str[i]==32 || str[i]=='\0') && l==1)
	{
	    char temp=str[f];
	    str[f]=str[i-1];
	    str[i-1]=temp;
	    l=0;
	}
    }
    cout<<str;
    getch();
}
