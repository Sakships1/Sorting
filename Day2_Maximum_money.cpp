// Maximum money ~ GFG

#include<iostream>
using namespace std;
class Solution{
	public:
		int Maximum_Money(int N, int K){
		int H = (N+1)/2;
		return (H*K);
	}
};
int main()
{
	int N, K;
	cout<<"Enter the No. of Houses:\n";
	cin>>N;
	cout<<"Enter the value of M0ney from 1 House:\n";
	cin>>K;
	Solution ob;
    cout<<"Maximum money the thief can rob is: "<< ob.Maximum_Money(N, K) << "\n";
}

