// Reverse Digit ~ GFG

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	int rem,sum=0;
    while(n>0){
	    rem=n%10;
	    sum=(sum*10)+rem;
	    n/=10;
	}
	cout<<"The reverse of the number is:" <<sum <<endl;
	return 0;
}
