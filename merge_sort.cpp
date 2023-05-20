#include<bits/stdc++.h>

using namespace std;

void Merge(int* left, int l_size, int* right, int r_size, int* arr, int n) {
    int i=0, j=0, k=0;
    while (i<l_size && j<r_size) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        }
        else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while (i<l_size) {
        arr[k] = left[i];
        k++;
        i++;
    }
    while (j<r_size) {
        arr[k] = right[j];
        k++;
        j++;
    }
}

void MergeSort(int* arr, int n) {
    if (n<2)
        return;
    int half = n/2;
    int left[half], right[n-half];
    for (int i=0; i<half; i++) left[i] = arr[i];
    for (int i=half; i<n; i++) right[i-half] = arr[i];
    MergeSort(left,half);
    MergeSort(right,n-half);
    Merge(left,half,right,n-half,arr,n);
}

int main() {
    int arr[] = {4, 7, 1, 9, 3, 2};
    MergeSort(arr, 6);
    for (int i=0; i<6; i++) printf("%d ",arr[i]);
    return 0;
}
