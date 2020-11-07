#include <iostream> 
using namespace std; 

void swap(int *xp, int *yp) 
{ 
	int temp = *xp; 
	*xp = *yp; 
	*yp = temp; 
} 

void selection_Sort(int arr[], int n) 
{ 
	int i, j, minEle_idx; 
	for (i = 0; i < n-1; i++) 
	{ 
		minEle_idx = i; 
		for (j = i+1; j < n; j++) 
		if (arr[j] < arr[minEle_idx]) 
			minEle_idx = j; 
		swap(&arr[minEle_idx], &arr[i]); 
	} 
} 
void printArray(int arr[], int size) 
{ 
	int i; 
	for (i=0; i < size; i++) 
		cout << arr[i] << " "; 
	cout << endl; 
} 
int main() 
{ 
	int arr[] = {10, 5, 8, 20, 2, 18}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	selection_Sort(arr, n); 
	cout << "Sorted array are as follow: \n"; 
	printArray(arr, n); 
	return 0; 
} 

