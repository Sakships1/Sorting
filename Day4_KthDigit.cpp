//Print the Kth digit

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	long long int A, B, K;
	cout<<"Enter the value of A:\n";
	cin>>A;
	cout<<"Enter the value of B:\n";
	cin>>B;
	cout<<"Enter the value of K:\n";
	cin>>K;
	long long power = pow(A, B);
	cout<<"The value of A to the power B is:"<< power << endl;
	K = K-1;
	while(K--)
	{
		power=power/10;
	}
	cout<<"The value from the right side for"<< K << "th position is: " << power%10<<endl;
	return 0;
}
