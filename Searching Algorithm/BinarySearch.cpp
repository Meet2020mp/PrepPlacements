//Time	Complexity:	O(nlogn).	Space	Complexity:	O(1)	
// As we are iterarting through half the array in each call.
// Array must be sorted 
#include <bits/stdc++.h> 
using namespace std; 


int BinarySearch(int arr[], int l, int r, int x) 
{ 
	if (r >= l) { 
		int mid = l + (r - l) / 2; 
		if (arr[mid] == x) 
			return mid; 
		if (arr[mid] > x) 
			return BinarySearch(arr, l, mid - 1, x); 
		return BinarySearch(arr, mid + 1, r, x); 
	} 

	return -1; 
} 

int main(void) 
{ 
	
	int n;
	int key;
	int i;
	cout<<"Enter the number of elements in array"<<endl;
	cin>>n;
	int A[n];  // otimizing the space
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	cout<<"Enter the number to be searched"<<endl;
	cin>>key;
	i=BinarySearch(A,0,n-1,key);
	cout<<"Index of the searching is "<<i<<endl;
} 

