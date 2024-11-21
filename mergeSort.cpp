#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& arr, int start, int mid, int end) {
    int n1 = mid - start + 1;
    int n2 = end - mid;

    vector<int> arr1(n1);
    vector<int> arr2(n2);

    // Correctly copy elements into arr1 and arr2
    for (int i = 0; i < n1; i++) {
        arr1[i] = arr[start + i];
    }
    for (int i = 0; i < n2; i++) {
        arr2[i] = arr[mid + 1 + i];
    }

    int p1 = 0, p2 = 0, k = start;

    // Merge two sorted subarrays
    while (p1 < n1 && p2 < n2) {
        if (arr1[p1] <= arr2[p2]) {
            arr[k++] = arr1[p1++];
        } else {
            arr[k++] = arr2[p2++];
        }
    }

    // Copy remaining elements of arr1, if any
    while (p1 < n1) {
        arr[k++] = arr1[p1++];
    }

    // Copy remaining elements of arr2, if any
    while (p2 < n2) {
        arr[k++] = arr2[p2++];
    }
}

void mergeSort(vector<int>& arr, int start, int end) {
    if (start < end) {
        int mid = start + (end - start) / 2;

        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
