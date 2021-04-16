// SEARCHING ~ #2
// Facing the sun

#include<iostream>
using namespace std;
class solution{
	public:
		int countTheBuildings(int h[], int n){
		int count = 1;
	    int current_max = h[0];
	    for(int i=0; i<n; i++)
	    {
	        if(h[i]> current_max)
	        {
	            count++;
	            current_max = h[i];
	        }
	    }
	    return count;
	}
};
int main()
{
	int n;
	cout<<"Enter the number of buildings:"<<endl;
	cin>>n;
	cout<<"H[]:";
	int h[n];
	for(int i=0; i<n; i++){
		cin>>h[i];
	}
	solution ob;
	cout<<" So, The number of buildings facing the sun is:" << ob.countTheBuildings(h,n) << endl;
	return 0;
}
