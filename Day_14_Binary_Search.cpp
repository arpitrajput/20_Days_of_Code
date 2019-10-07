#include <iostream>
using namespace std;

int RecursiveBinarySearch(int arr[], int l, int r, int element);

int IterativeBinarySearch(int arr[], int l, int r, int element);

int main() {
       int arr[] = {1,3,5,6,15,27,34,100,112,134};
       int element;      
       cout<<"Enter element to be search using Recursive method\n";
       cin>>element;
       int size = sizeof(arr)/sizeof(0);
       cout<<"Recursive Binary Search\n";
       int x = RecursiveBinarySearch(arr, 0, size-1, element);
       if (x != -1) cout<<"Element found at index: "<<x<<"\n\n";
       else cout<<"Element not found \n\n";
       cout<<"Iterative Binary Search\n";
       int element2;
       cout<<"Enter element to be search using Iterative method\n";
       cin>>element2;
       int y = IterativeBinarySearch(arr, 0, size-1, element2);
       if (y != -1) cout<<"Iterative method: element found at index: "<<y;
       else cout<<"Element not found";
}
int RecursiveBinarySearch(int arr[], int l, int r, int element){
    if(r >= l)
    {
    int mid = l + (r - l) / 2; 
    if(arr[mid] == element) return mid;
    if(arr[mid] > element)
    return RecursiveBinarySearch(arr, l, mid-1, element);
    if(arr[mid] < element)
    return RecursiveBinarySearch(arr, mid+1, r, element);
    }
    return -1;
}

int IterativeBinarySearch(int arr[], int l, int r, int element){
        
        while(l <= r){
            int mid = l + (r - l) / 2; 
            if (arr[mid] ==  element) return mid;
            
            if(arr[mid] < element)
            l = mid + 1;
            else
            r = mid - 1;
        }
        return -1;
}