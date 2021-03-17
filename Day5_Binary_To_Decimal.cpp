// Binary Number to Decimal

#include<iostream>
#include<math.h>
using namespace std;
class Solution{
	public:
		int BinaryToDecimal(string n){
			int dec = 0, base = 1;
			for(int i=n.size()-1;i>=0;i--)
			{
				if(n[i]=='1')
				dec+=base;
				base*=2;
			}
			return dec;	 
		}		
};
int main()
{
	string n;
	cout<<"Enter the Binary number:";
	cin>>n;
	Solution ob;
	cout<<ob.BinaryToDecimal(n)<<endl;
}
