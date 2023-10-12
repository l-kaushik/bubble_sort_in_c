#include<stdio.h>

void printArray(int A[], int n){
    for(int i = 0; i<n; i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}

int main(){
    int a[] = {2,3,5,1,6,4};
    int size = sizeof(a)/sizeof(a[0]);
    printArray(a,size);
    return 0;
}