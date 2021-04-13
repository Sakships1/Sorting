// count possible triangles

#include<iostream>
using namespace std;
class Solution{
public:
	int count_Possible_Triangles(int arr[], int n){
		int count = 0;
		for(int i=0; i<n-2; i++){
			for(int j=i+1; j<n-1; j++){
				for(int k=j+1; k<n; k++){
					if(arr[i]+arr[j]>arr[k] && arr[i]+arr[k]>arr[j] && arr[j]+arr[k]>arr[i])
					count++;
				}
			}
		}
		return count;
	}
};
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
		cin>>arr[i];
	Solution ob;
	cout<<ob.count_Possible_Triangles(arr,n)<<endl;
	return 0;
}
