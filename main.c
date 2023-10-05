#include<stdio.h>

void printArray(int A[], int n){
    for(int i = 0; i<n; i++){
        printf("%d ",A[i]);
    }
}

int main()
{
    int A[] = {12, 54, 65, 7, 23, 9};
    int n = 6;
    printArray(A, n);

    return 0;
}
