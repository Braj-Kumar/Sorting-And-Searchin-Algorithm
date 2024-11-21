#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// ------------ Time Complexity -----------------

//  worst case O(logn)
//  averge Case O(logn)
//  Best case  O(1)  --> if target is mid element

//  ------------------  Space Complexity -------------
// O(1)

int binearySearch(vector<int>& arr, int n,int target){
    int start = 0;
    int end = n-1;
    while(start<=end){
        int mid = end-(start+end)/2;
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] > target){
            end = mid -1;
        }
        else{
            start = mid+1;
        }
    }
    return -1;
}
int main(){
    int n, target;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>target;
    cout<<binearySearch(arr,n,target);
    return 0;
}