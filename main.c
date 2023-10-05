#include<stdio.h>

void printArray(int A[], int n){
    for(int i = 0; i<n; i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}

void bubbleSort(int A[], int n){
    int temp, isSorted;
    for(int i = 0; i<n-1; i++){ // loop for passes
        isSorted = 1;
        for(int j = 0; j<n-i-1; j++){ // for comparison in each pass
            if(A[j] > A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                isSorted = 0; 
            }
        }
        if(isSorted){  // checking if array is already sorted or not
            return; 
        }
    }
}

int main()
{
    // int A[] = {12, 54, 65, 7, 23, 9, 2};
    int A[] = {1,2,3,4,5,6,7};
    int n = 7;
    printArray(A, n);
    bubbleSort(A,n);
    printArray(A, n);
    return 0;
}
