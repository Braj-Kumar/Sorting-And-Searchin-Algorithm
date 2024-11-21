#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// -----------------  Time Complexity ------------------
// worst Case O(n^2)
// Average Case O(n^2)
// Best Case O(n)  --> if array is already sorted

void insertionSort(vector<int>& arr, int n) {
    for (int i = 1; i < n; i++) {
        
         // The element to be placed

        int element = arr[i];
        int j = i - 1;

        // Shift elements of the sorted portion to the right
        while (j >= 0 && arr[j] > element) {
            arr[j + 1] = arr[j];
            j--;
        }
        // Place the element in the correct position
        arr[j + 1] = element;
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}