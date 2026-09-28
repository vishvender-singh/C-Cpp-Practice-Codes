// Program to find the average ASCII character for every word in a string and store it in a new string.

#include <iostream.h>
#include <conio.h>
#include <string.h>

void main()
{
    clrscr();
    char str[30];
    char str2[30];
    int ind= 0;
    cout << "Enter a string: ";
    cin.getline(str, 100);
    int sum = 0;
    int length = 0;
    int len=strlen(str);

    for (int i=0; i<=len; i++)
    {
	if (str[i] == 32 || str[i] == '\0')
	{
	    if (length > 0)
	    {
		char avg = (sum / length);
		str2[ind]=avg;
		ind++;
		sum=0;
		length=0;
	    }

	    if (str[i]==32)
	    {
		str2[ind] = ' ';
		ind++;
	    }
	}
	else
	{
	    str2[ind] = str[i];
	    ind++;
	    sum=sum + str[i];
	    length++;
	}
    }
    str2[ind] = '\0';
    cout << "\n average word string is : \n " << str;
    getch();
}

