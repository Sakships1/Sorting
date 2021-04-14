// SEARCHING ~ #1
//Que- Searching a number.

#include<iostream>
using namespace std;
class Solution{
public:
	int search(int arr[], int n, int k) {
	    int i;
	    for (i = 0; i < n; i++)
	        if (arr[i] == k) return i + 1;
	    return -1;
	}
};
int main()
{
	int n, i, k;
	cout<<"Enter the number of elements:"<< endl;
	cin>>n;
	cout<<"Enter the  value that you have to search:"<< endl;
	cin>>k;
	cout<<"The arr[] are:"<< endl;
	int a[n];
	for(int i=0; i<n; i++)
	cin>>a[i];
	Solution ob;
	cout<< "The output is:\n" << ob.search(a,n,k) << endl;
	return 0;
}
