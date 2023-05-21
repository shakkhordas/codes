#include<bits/stdc++.h>

using namespace std;

void BubbleSort(int* A, int n) {
    for (int j=0; j<n-1; j++) {
        int flag = 0;
        for (int i=0; i<n-j-1; i++) {
            if (A[i]>A[i+1]) {
                int temp = A[i];
                A[i] = A[i+1];
                A[i+1] = temp;
                flag = 1;
            }
        }
        if (!flag) break;
    }
}

int main() {
    int n;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i=0; i<n; i++) {
        printf("Enter %d-th element: ", i);
        scanf("%d", &arr[i]);
    }

    BubbleSort(arr, n);

    printf("\nAfter sorting: ");
    for (int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
