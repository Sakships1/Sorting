// Remove duplicate elements from sorted Array ~ GFG

#include<iostream>
using namespace std;
class Solution{
public:
	int remove_duplicate(int a[], int n){
		int i = 0;
		for(int j=1; j<n; j++)
		{
			if(a[j]!=a[i]){
				i++;
				a[i]=a[j];
			}
		}
		return i+1;
	}
};
int main()
{
	int N;
	int a[N];
	for(int i=0; i<N; i++)
	{
		cin>>a[i];
	}
	Solution ob;
	int n = ob.remove_duplicate(a,N);
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
}
