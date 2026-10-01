// remove middle letter of every word of string
#include <iostream.h>
#include <conio.h>
#include <string.h>
void main()
 {
    char str[20],str2[20],temp[20];
    int i,k=0,j=0,wl=0;
    clrscr();
    cout << "Enter a string: ";
    cin.getline(str,20);
    int len=strlen(str);
    for (i=0;i<=len; i++)
      {
	if (str[i]==' '||str[i]=='\0')
	{
	    int m1,m2;
		if (wl%2!= 0)
		 {
		     m1=wl/2;
		     for (k=0; k<wl; k++)
		     {
		      if (k!=m1)
		      {
			str2[j]=temp[k];
			j++;
		      }
		     }
		  }
		 else
		  {
		    m1=(wl/2) - 1;
		    m2=wl/2;
		    for (k=0; k<wl; k++)
		    {
		     if (k!=m1 && k!=m2)
		     {
			str2[j]=temp[k];
			j++;
		     }
		    }
		  }
	    if (str[i]==' ')
	    {
		str2[j] = ' ';
		j++;
	    }
	    wl=0;
       }
	   else
	   {
	    temp[wl]=str[i];
	    wl++;
	   }
    }
    str2[j] = '\0';
    cout << "New string: "<<str2;
    getch();
}
