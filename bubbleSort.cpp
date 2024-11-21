#include<bits./stdc++.h>
using namespace std;

//  ---------------  Time Complexity --------------
// Best Case O(n^2)
// Averge Case O(n^2)
// Worst Case O(n) --> if array is already sorted optimized


//  -------------- Space Complexity --------------
// O(1)


void bubbleSort(vector<int>& arr){
    int n = arr.size();
    for(int i=0;i<n-1;i++){
        bool flag = false;

        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);

                flag = true;
            }
        }
        if(!flag){
            break;
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubbleSort(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}