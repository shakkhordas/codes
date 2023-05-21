#include<bits/stdc++.h>

using namespace std;

void SelectionSort(int* A, int n) {
    for (int i=0; i<n-1; i++) {
        int mindex = i;
        for (int j=i+1; j<n; i++) {
            if (A[j] < A[mindex])
                mindex = j;
        }
        int temp = A[i];
        A[i] = A[mindex];
        A[mindex] = temp;
    }
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i=0; i<n; i++){
        printf("Enter %d-th element: ", i);
        scanf("%d", &arr[i]);
    }

    SelectionSort(arr, n);

    for (int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
