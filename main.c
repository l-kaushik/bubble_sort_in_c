#include<stdio.h>

void printArray(int A[], int n){
    for(int i = 0; i<n; i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}

int main()
{
    int a[] = {8,0,7,1,3};
    printArray(a, 5);
    return 0;
}