#include<stdio.h>
#include<stdlib.h>

void printArray(int A[], int n){
    for(int i = 0; i<n; i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}

void mergeSort(int a[], int low, int high){
    int mid;
    if(low < high){
        mid = (low + high)/2;

        mergeSort(a, low, mid);
        mergeSort(a, mid+1, high);
        merge(a,low,mid, high);
    }
}

int main()
{
    int a[] = {8,0,7,1,3,-2};
    printArray(a, 6);
    return 0;
}