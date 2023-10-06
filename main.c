#include<stdio.h>

void printArray(int A[], int n){
    for(int i = 0; i<n; i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}

void insertionSort(int A[], int n){
    int pos = 0, temp = 0;
    for(int i = 1; i<n; i++){
        pos = i;
        while(pos > 0 && A[pos-1] > A[pos]){
            temp = A[pos-1];
            A[pos-1] = A[pos];
            A[pos] = temp;
            pos--;
        }
    }
}

int main()
{
    int A[] = {7, 12, 2, 91, 77, 3};
    int n = 6;
    printArray(A, 6);
    insertionSort(A, n);
    printArray(A, 6);
    return 0;
}