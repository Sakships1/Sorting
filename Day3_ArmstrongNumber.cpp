// Armstrong Number ~ GFG

#include <iostream>
using namespace std;
class Solution {
  public:
    string armstrongNumber(int num){
        int sum=0;
        int res=num;
        while(num>0)
        {
            int rem=num%10;
            sum=sum+(rem*rem*rem);
            num=num/10;
            
        }
        if(res==sum)
        return "Yes, It is an Armstrong number";
        else
        return "No, It is not an Armstrong Number";
    }
};
int main()
{
	int num;
	cout<< "Enter a 3 digit number:"; 
	cin >> num;
    Solution ob;
    cout << ob.armstrongNumber(num) << endl;
    return 0;
}
