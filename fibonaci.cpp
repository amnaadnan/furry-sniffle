#include<iostream>
#include<conio.h>
int fib(int);
using namespace std;
int main ()
{
	for(int x=0; x<12; x++)
	
		cout<<fib(x)<<"  ";
		cout<<endl;
		return 0;
		getch();
	
}
	int fib(int n)
	{
		if(n<=0)
		return 0;
		else if(n==1)
		return 1;
		else
		return fib(n-1)+fib(n-2);
		
	}

	
