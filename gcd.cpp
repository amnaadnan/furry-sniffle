#include<iostream>
#include<conio.h>
int gcd(int , int);
using namespace std;
int main ()
{
	int num1, num2;
	cout<<"Enter any 2 number:"<<endl;
	cin>> num1 >> num2;
	cout<<"GCD of the"<<num1<<"and"<<num2<<"is:";
	cout<<gcd(num1,num2)<<endl;
	return 0;
	getch();
}
int gcd(int a, int b)
{
	if(a%b==0)
	return b;
	else
	return gcd(b,a%b);
}
