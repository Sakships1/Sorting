// Add two Fractions ~ GFG

#include<iostream>
using namespace std;
void addFraction(int, int, int,int);
int main()
{
	int num1, den1, num2, den2, resultNum, resultDen;
	cout<<"Enter the input Value:";
	cin>>num1>>den1>>num2>>den2;
	addFraction(num1, den1, num2, den2);
}
	
int gcd(int den1, int den2){
	if(den2==0)
	return den1;
	return gcd(den2, den1%den2);
}

void addFraction(int num1, int den1, int num2, int den2)
{
	int lcm = den1*den2/gcd(den1,den2);
	int v = (lcm/den1)*num1 + (lcm/den2)*num2;
	int k = gcd(v, lcm);
	lcm = lcm/k;
	v = v/k;
	cout<<v<<"/"<<lcm<<endl;
}
