#include<stdio.h>

void printArray(int A[], int n){
    for(int i = 0; i<n; i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}

void selectionSort(int a[], int size){
    for(int i = 0; i<size-1; i++){
        int min = i;
        for(int j = i+1; j<size; j++){
            if(a[min] > a[j]){min = j;}
        }
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}

int main()
{
    int a[] = {8,0,7,1,3,-2};
    printArray(a, 6);
    selectionSort(a,6);
    printArray(a, 6);
    return 0;
}