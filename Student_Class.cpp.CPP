#include<iostream.h>
#include<conio.h>
#include<string.h>
class student
{
	private:
	int rollno;
	char name[20];
	char course[20];
	char address[20];
	long phone;
	public:
	student()
	{
	rollno=-1;
	strcpy(name,"undefined");
	strcpy(course,"undefined");
	strcpy(address,"undefined");
	}
	student(char na[],int r,char add[],char co[],long p)
	{
	strcpy(name,na);
	rollno=r;
	strcpy(address,add);
	strcpy(course,co);
	phone=p;
	}
	void setname(char na[])
	{
	strcpy(name,na);
	}
	void setaddress(char ad[])
	{
	strcpy(address,ad);
	}
	void setcourse(char co[])
	{
	strcpy(course,co);
	}
	void setrollno(int r)
	{
	rollno=r;
	}
	void setphone(long p)
	{
	phone=p;
	}
	char * getName()
	{
	return name;
	}
	char * getaddress()
	{
	return address;
	}
	char * getcourse()
	{
	return course;
	}
	int getrollno()
	{
	return rollno;
	}
	long getphone()
	{
	return phone;
	}
	void disroll()
	{
	cout<<endl<<"rollno is:"<<rollno;
	cout<<endl<<"--------";
	}
	void disname()
	{
	cout<<endl<<"name is  :"<<name;
	cout<<endl<<"------------";
	}
	void setdata()
	{
	cout<<endl<<"enetr name";
	cin>>name;
	cout<<endl<<"enter rollno";
	cin>>rollno;
	cout<<endl<<"enter address";
	cin>>address;
	cout<<endl<<"enter course";
	cin>>course;
	cout<<endl<<"enter phone no ";
	cin>>phone;
	}

	void display()
	{
	cout<<endl<<"name of student :"<<name;
	cout<<endl<<"roll no :"<<rollno;
	cout<<endl<<"address is :"<<address;
	cout<<endl<<"phone no is :"<<phone;
	cout<<endl<<"course is :"<<course;
	cout<<endl<<"----------";
	}
	};
	void main()
	{
		clrscr();
		student q[5];
		int temp,val;
		int i;
		for(i=0;i<=2;i++)
		{

		q[i].setdata();
		}
		int no;
	     //	cout<<endl<<"enter roll no for searching";
	       //	cin>>no;
	     for(i=0;i<=2;i++)
		{

		for(int j=i+1;j<=2;j++)
		{


		if(q[i].getrollno()>q[j].getrollno())
		{
	       temp=q[i].getrollno();
	       val=q[j].getrollno();

		q[i].setrollno(val);
		q[j].setrollno(temp);
		}
		}
		}
		for(i=0;i<=2;i++)
		{
		q[i].display();
		}
		char ch[20],st[20];
		 for(i=0;i<=2;i++)
		{

		for(int j=i+1;j<=2;j++)
		{


		if(q[i].getName()>q[j].getName())
		{
	      strcpy( ch,q[i].getName());
	      strcpy( st,q[j].getName());

		q[i].setname(st);
		q[j].setname(ch);
		}
		}
		}
		for(i=0;i<=2;i++)
		{
		q[i].disname();
		}

	     int max;
	     for(i=0;i<=2;i++)
	     {
	     if(i==0)
	     {
	     max=q[i].getrollno();
	     }
	     else if(q[i].getrollno()>max)
	     {
	     max=q[i].getrollno();
	     }
	     }
	     cout<<endl<<"highest roll no is:"<<max;
		student A;
		student B("ram",123,"Ajmer","BCA" ,999991230);
		A.setname("shyam");
		A.setrollno(19138);
		getch();
		}