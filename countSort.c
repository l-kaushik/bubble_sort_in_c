#include<stdio.h>
#include<stdlib.h>

void printArray(int a[], int n){
    for(int i = 0; i<n; i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

int main()
{
    int a[] = {1,2,3,4,5,6,7};
    int size = sizeof(a)/sizeof(a[0]);
    return 0;
}