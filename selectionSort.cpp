#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void selectionSort(vector<int>& arr, int n){

//  ----------------- Time Complexity -----------------
// Worst case O(n^2)
// Average Case O(n^2)
// Best Case O(n^2)

// ----------------  Space cimplexity ------------
//  O(1)

    for(int i=0;i<n;i++){

        int mini = INT_MAX;
        int minIndex = -1;

        for(int j=i;j<n;j++){

            // find minimum from sorted array

            if(arr[j]<mini){
                mini = arr[j];
                minIndex = j;
            }
        }
        // Swapping minimum element from unsorting first
        swap(arr[i],arr[minIndex]);
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}