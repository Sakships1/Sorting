// Perfect Numbers ~ GFG

#include<iostream>
using namespace std;
class Solution{
	public:
		int Perfect_Number(int N){
			int sum = 0;
			for(int i=1; i<N; i++)
			{
				if(N%i==0)
				sum = sum+i;
			}
			if(sum==N)
			cout<<"It's a Perfect Number"<<endl;
			else
			cout<<"It's not a Perfect Number"<<endl;
		}
};
int main()
{
	int i, N, sum=0;
	cout<<"Enter the value of N : ";
	cin>>N;
	Solution ob;
	cout<<ob.Perfect_Number(N)<<endl;
}
