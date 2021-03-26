// Valid Square ~ GFG

#include<iostream>
using namespace std;
class Solution{
	public:
		int distSq(int x, int y, int a, int b)
		{
			return(x-a)*(x-a)+(y-b)*(y-b);
		}
		bool isSq(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4){
			int d2 = distSq(x1,y1,x2,y2);
			int d3 = distSq(x1,y1,x3,y3);
			int d4 = distSq(x1,y1,x4,y4);
			if(d2==0 || d3==0 || d4==0)
			return false;
			if(d2==d3 && 2*d2==d4 && 2*distSq(x2,y2,x4,y4)==distSq(x2,y2,x3,y3))
			{
				return true;
			}
			if(d3==d4 && 2*d3==d2 && 2*distSq(x3,y3,x2,y2)==distSq(x3,y3,x4,y4))
			{
				return true;
			}
			if(d2==d4 && 2*d2==d3 && 2*distSq(x2,y2,x3,y3)==distSq(x2,y2,x4,y4))
			{
				return true;
			}
		}
		
		
		string is_Square(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4){
			if(isSq(x1, y1, x2, y2, x3, y3, x4, y4))
			return "yes";
			else
			return "No";
		}
};

int main()
{
	int x1, y1, x2, y2, x3, y3, x4, y4;
	cout<<"Enter the value of x1:"<<endl;
	cin>>x1;
	cout<<"Enter the value of y1:"<<endl;
	cin>>y1;
	cout<<"Enter the value of x2:"<<endl;
	cin>>x2;
	cout<<"Enter the value of y2:"<<endl;
	cin>>y2;
	cout<<"Enter the value of x3:"<<endl;
	cin>>x3;
	cout<<"Enter the value of y3:"<<endl;
	cin>>y3;
	cout<<"Enter the value of x4:"<<endl;
	cin>>x4;
	cout<<"Enter the value of y4:"<<endl;
	cin>>y4;
	Solution ob;
	cout<<ob.is_Square(x1,y1,x2,y2,x3,y3,x4,y4)<<endl;
	return 0;
}
