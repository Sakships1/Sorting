// Sum of Digit of a number and whether it's palindrome or not

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	int sum=0, a=0, rem=0, r, b;
	int x = n;
	while(x!=0)
	{
		rem = x%10;
		sum = sum+rem;
		x=x/10;
	}
	b=sum;
	while(b!=0)
	{
		r=b%10;
		a=(a*10)+r;
		b=b/10;
	}
	if(sum==a)
	{
		cout<<" Yes, The sum of it's digit is Palindrome.";
	}
	else
	{
		cout<<"The sum of it's digit is not Palindrome";
	}
	return 0;
}
