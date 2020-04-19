#include<iostream>
#include<conio.h>
using namespace std;
main()
{	
for(int a=0; a<2;a++)
{
	cout<<"\t   *\n";
}
cout<<endl;
	for(int a=0;a<2;a++)
	{
		cout<<"      *";
		cout<<"\t";
		cout<<"   *";
		cout<<"\t*\n";
		if(a==1)
		{
			for(int b=0;b<1;b++)
			{
				cout<<"       * * *";
			}
				for(int b=0;b<1;b++)
				{
		       cout<<"  * * ";
	
			}
		}
	}
	cout<<endl<<endl;
	for(int a=0; a<13; a++)
	{
		if(a==6||a==7||a==8||a==9)
		{
			cout<<"*";
		}
		else 
		{
			cout <<" ";
		}
		if (a==6 || a==9)
		{
			for(int x=0;x<1;x++)
			{
				cout<<"*****";
			}
		}
		else 
		{
			for (int y=0;y<1;y++)
			{
				cout<<"     ";
			}
		}
		if (a>2)
		{
			cout<<"*";
			
		}
		else
		{
			cout<<" ";
		}
		if(a==12)
		{
			for(int b=0; b<5;b++)
			{
				cout<<"*";
			}
		}
		else
		{
			for(int b=0; b<5;b++)
			{
				cout<<" ";
			}
		}
		cout<<"*";
		if(a==12)
		{
			for(int b=0; b<5;b++)
			{
				cout<<"*";
			}
		}
		else
		{
			for(int b=0; b<5;b++)
			{
				cout<<" ";
			}
		}
		cout<<"*";
		cout<<"   ";
		cout<<"*";
		cout<<"\t \t";
		for(int b=0;b<13;b++)
		{	
		if(a==b)
		{
		cout<<"*";	
		}
		else if(a==12)
		{
				cout<<"*";
		}
		else
		{
				cout<<" ";	
		}		
		}
	cout<<"*";
			cout<<"\t";
	cout<<"*";
		cout<<"\t";
		if(a==6||a==7||a==8||a==9)
		{
			cout<<"*";
		}
		else 
		{
			cout <<" ";
		}
		if (a==6 || a==9)
		{
			for(int x=0;x<1;x++)
			{
				cout<<"*****";
			}
		}
		else 
		{
			for (int y=0;y<1;y++)
			{
				cout<<"     ";
			}
		}
		for(int e=0;e<1;e++)
	{
		if(a>3)
		cout<<"*";
	}	
	if(a==12)
	{
		cout<<"\t*********";
	}
	else{
		cout<<"\t\t";
	}
		cout<<" * ";
		cout<<"    *";
	cout<<"\t";
	for(int b=0;b<13 ;b++)
	{
		if (a==b)
		{
			cout<<"*";
		}
		else if (a==12)
		{
		
	{
		cout<<"*";
	}
		}
		else
		{
			cout<<" ";
		}
	}
	cout <<"*";
	cout<<endl;
	}
getch();
}
