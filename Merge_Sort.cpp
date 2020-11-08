// C++ program for Merge Sort 
#include<iostream> 
using namespace std;
void Merge(int arr[], int l, int m, int r) 
{ 
	int n1 = m - l + 1; 
	int n2 = r - m;  
	int L[n1], R[n2];  
	for(int i = 0; i < n1; i++) 
		L[i] = arr[l + i]; 
	for(int j = 0; j < n2; j++) 
		R[j] = arr[m + 1 + j];  
	int i = 0;  
	int j = 0; 
	int k = l; 
	
	while (i < n1 && j < n2) 
	{ 
		if (L[i] <= R[j]) 
		{ 
			arr[k] = L[i]; 
			i++; 
		} 
		else
		{ 
			arr[k] = R[j]; 
			j++; 
		} 
		k++; 
	} 
	while (i < n1) 
	{ 
		arr[k] = L[i]; 
		i++; 
		k++; 
	} 
	while (j < n2) 
	{ 
		arr[k] = R[j]; 
		j++; 
		k++; 
	} 
} 
void Merge_Sort(int arr[], int l, int r) 
{ 
	if (l < r) 
	{ 
		int m = l + (r - l) / 2; 
		Merge_Sort(arr, l, m); 
		Merge_Sort(arr, m + 1, r); 

		Merge(arr, l, m, r); 
	} 
} 
void printArray(int A[], int size) 
{ 
	for(int i = 0; i < size; i++) 
		cout << A[i] << " "; 
} 
int main() 
{ 
	int arr[] = { 4, 3, 2, 10, 12, 1, 82, 67, 83 }; 
	int arr_size = sizeof(arr) / sizeof(arr[0]); 

	cout << "Given array is \n"; 
	printArray(arr, arr_size); 

	Merge_Sort(arr, 0, arr_size - 1); 

	cout << "\nSorted array is \n"; 
	printArray(arr, arr_size); 
	return 0; 
} 
