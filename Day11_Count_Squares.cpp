// Count Squares ~ GFG

#include<iostream>
#include<math.h>
using namespace std;
class Solution{
	public:
		int Count_Squares(int N){
			int a = sqrt(N);
			if(a*a==N)
			return (a-1);
			else 
			return a;
		}
};
int main()
{
	int N, a;
	cout<<"Enter the value:";
	cin>>N;
	Solution ob;
	cout<<ob.Count_Squares(N)<<endl;
}
