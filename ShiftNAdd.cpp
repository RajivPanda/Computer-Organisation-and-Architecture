#include<iostream.h>
#include<conio.h>
#include<math.h>
void binary(int);

void main()
{
	int a,b,i,rem,result=0;
	clrscr();
	cout<<"Enter two numbers to multiply them using shift and add";
	cin>>a>>b;
	cout<<a<<" in binary:" ;
	binary(a);
	cout<<"\n"<<b<<" in binary:";
	binary(b);

	cout<<"\nMultiplication of "<<a<<" and "<<b<<" is ";
	for(i=0; i<=20; i++)
	{
		rem=b%2;
		if(rem)
			result+=(a<<i);
		else
			result+=0;
		b=(b>>1);
	}
	cout<<result<<" which is ";
	binary(result);
	cout<<" in binary.";

	getch();
}

void binary(int x)
{       int rem;
	if(x<=1)
	{
		cout<<x;
		return;
	}

	rem=x%2;
	binary(x>>1);			//Using recursion to display the result
	cout<<rem;
}
