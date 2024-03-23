#include<iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int x){
    if(r>=l){
        int mid = l+(r-l)/2;
        if(arr[mid] == x)
          return mid;

        if(arr[mid] > x)
          return binarySearch(arr, l, mid-1, x);

        return binarySearch(arr, mid+1, r, x);
    }
    return -1;
}

int main(void){
    int arr[] = {1,2,3,4,5};
    int x = 5;
    int n = sizeof(arr) / sizeof(arr[0]);

    int res = binarySearch(arr, 0, n-1, x);
    if(res == -1)
      cout << "Element is not present";
    else 
        cout << "Element is presnt at index" << res;

    return 0;
}