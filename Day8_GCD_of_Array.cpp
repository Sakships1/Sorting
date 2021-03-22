// GCD of array ~ GFG

#include<iostream>
using namespace std;
int gcd(int a, int b){
	if(b==0)
	return a;
	return gcd(b, a%b);
}
int main()
{
	int n;
	cout<<"Enter the length of Array:";
	cin>>n;
	int arr[n];
	cout<<"Enter the array:";
	for(int i=0; i<n; i++)
	cin>>arr[i];
	
	int k=arr[0];
	for(int i=1;i<n;i++)
	{
		k = gcd(k,arr[i]);
	}
	cout<<k<<endl;
	return 0;
}
