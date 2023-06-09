#include<bits/stdc++.h>

using namespace std;

void SelectionSort(int* A, int n) {
    for (int i=0; i<n-1; i++) {
        int mindex = i;
        for (int j=i+1; j<n; j++) {
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
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the array elements: ");

    for (int i=0; i<n; i++) scanf("%d", &a[i]);

    SelectionSort(a,n);

    printf("\nAfter sorting: ");
    for (int i=0; i<n; i++) printf("%d ", a[i]);

    return 0;
}
