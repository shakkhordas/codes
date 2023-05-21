#include<bits/stdc++.h>

using namespace std;

void InsertionSort(int* A, int n) {
    for (int i=1; i<n; i++) {
        int value = A[i];
        int hole = i;
        while (i>0 && A[hole-1]>value) {
            A[hole] = A[hole-1];
            hole = hole-1;
        }
        A[hole] = value;
    }
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the array elements: ");

    for (int i=0; i<n; i++) scanf("%d", &a[i]);

    InsertionSort(a,n);

    printf("\nAfter sorting: ");
    for (int i=0; i<n; i++) printf("%d ", a[i]);
    return 0;
}
