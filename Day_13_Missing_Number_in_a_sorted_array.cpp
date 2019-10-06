#include <bits/stdc++.h> 
using namespace std; 

int getMissingNo(int a[], int n) 
{ 

	int total = (n + 1) * (n + 2) / 2; 
	for (int i = 0; i < n; i++) 
		total -= a[i]; 
	return total; 
} 

int main() 
{ 
	    int size;
	    cout<<"Enter size of array: \n";
	    cin>>size;
	    int arr[size];
	    cout<<"Enter array elements : \n";
	    for(int i = 0; i<size; i++)
	    cin>>arr[i];
	    int miss = getMissingNo(arr, size-1); 
	    cout <<"Missing element is : "<<miss; 
} 
