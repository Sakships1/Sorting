/*Fibonacci Series*/


#include<stdio.h>
int main()
{
	long long int fib(int n)
	{
		long long int a=0, b=1,c,i;
		if(n==0)
		{
			return a;
		}
		for(i=2; i<n; i++)
		{
			c=a+b;
			a=b;
			b=c;
		}
	}
}
