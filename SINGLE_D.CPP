//program to find sum of digit of number until it reduces to a single digit
#include <iostream.h>
#include <conio.h>
void main()
 {
    int num, sum, digit;
    clrscr();
    cout << "Enter a number: ";
    cin >> num;

    while (num > 9)
   {
	sum = 0;
	while (num > 0)
	 {
	    digit = num % 10;
	    sum = sum + digit;
	    num = num / 10;
	}

	num = sum;
    }

    cout << "single digit sum is: " << num;
    getch();
}

