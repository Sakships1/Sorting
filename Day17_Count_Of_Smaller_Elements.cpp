// C++ program to count smaller or equal ~ GFG(no user input)
#include <bits/stdc++.h>
using namespace std;
int binarySearchCount(int arr[], int n, int key)
{
	int left = 0, right = n;

	int mid;
	while (left < right) {
		mid = (right + left) >> 1;
		if (arr[mid] == key) {
			while (mid + 1 < n && arr[mid + 1] == key)
				mid++;
			break;
		}
		else if (arr[mid] > key)
			right = mid;
		else
			left = mid + 1;
	}
	while (mid > -1 && arr[mid] > key)
		mid--;
	return mid + 1;
}
int main()
{
	int arr[] = { 1, 2, 4, 5, 8, 10 };
	int key = 11;
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << binarySearchCount(arr, n, key);
	return 0;
}

