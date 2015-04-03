// FIFO.cpp : Program to implement first in first out methodology of memory management
// in Visual C++
#include<iostream>
#include "stdafx.h"
#include<conio.h>

using namespace std;
int main()
{
	int a[10]={-1}, page[10],pages,fault=0,flag,n;
	cout<<"Enter the number of pages";
	cin>>pages;
	cout<<"Enter the frame size";
	cin>>n;
	
	cout<<"Enter the values into pages:";
		for (int i = 0; i < pages; i++)
			cin>>page[i];
		cout<<"Page\tFrame status\n";
		for (int i = 0; i < pages; i++)
		{
			flag=0;
			cout<<page[i]<<"\t";
			for (int j = 0; j < n; j++)
			{
				if(a[j]==page[i])
					flag++;
				else
					continue;
			}	
				if (flag==0)
				{
					for (int i = n-1; i>= 0; i--)
						a[i]=a[i-1];
					a[0]=page[i];
					fault++;
					for (int i = 0; i < n; i++)
						cout<<"\t"<<a[i];
					cout<<endl;
				}
		}
		cout<<"\nNo. of Page faults:"<<fault;

	
	_getch();
	return 0;

}
