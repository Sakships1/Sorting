#include<iostream>
using namespace std;

void swap(int*xp, int*yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
void bubble_sort(int arr[], int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			swap(&arr[j], &arr[j+1]);
		}
	}
}
void printArray(int arr[], int size)
{
	int i; 
	for (i = 0; i < size; i++) 
		cout << arr[i] << " "; 
	cout << endl; 
}
int main()
{
	int arr[] = {99, 45, 3, 23, 89, 2, 1, 90, 22, 33, 75};
	int n = sizeof(arr)/sizeof(arr[0]);
	bubble_sort(arr,n);
	cout<<"sorted array are as follow: \n";
	printArray(arr,n);
	return 0;
}
