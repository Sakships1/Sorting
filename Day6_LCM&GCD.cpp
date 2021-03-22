// LCM of two number ~ GFG

#include<iostream>
#include<vector>
using namespace std;
class Solution{
	public:
		long long gcd(long long a , long long b)
    {
        if(a == 0)
            return b;
        return gcd(b%a, a);
    }
    vector<long long> lcmAndGcd(long long A , long long B) {
        
        vector<long long> arr(2);
        
        long long g = gcd(A, B);
        long long l = (A*B)/g;    
        
        arr[0] = l;
        arr[1] = g;
        
        return arr;
    }
};
int main()
{
	long long A, B, a, b;
	cout<<"Enter the first number for gcd:\n";
	cin>> a;
	cout<<"Enter the second number for gcd:\n";
	cin>> b;
	cout<<"Enter the Fisrt number for LCM:\n";
	cin>> A;
	cout<<"Enter the Second number for LCM:\n";
	cin>> B;
	Solution ob;
	vector<long long> ans= ob.lcmAndGcd(A,B);
	cout<<ans[1]<<" "<<ans[0]<<endl;
}

