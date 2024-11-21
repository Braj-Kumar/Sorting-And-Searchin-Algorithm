#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// -------------- Time Complexity -----------
// Worst case O(n)
// Average case O(n)
// Best case O(1) --> if target is the first element

int linearSearch(vector<int>& arr,int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int n,target;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>target;
    cout<<linearSearch(arr,n,target);
    return 0;
}