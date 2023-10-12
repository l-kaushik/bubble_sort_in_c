#include<stdio.h>

void printArray(int A[], int n){
    for(int i = 0; i<n; i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}

int partition(int a[], int low, int high){
    int pivot = a[low];
    int i = low + 1;
    int j = high;
    int temp;
    
    do{
        while(a[i] <= pivot){
            i++;
        }

        while(a[j] > pivot){
            j--;
        }
        
        if(i<j){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }while(i < j);

    // swap a[low] and a[j]
    temp = a[low];
    a[low] = a[j];
    a[j] = temp;

    return j;
}

void quickSort(int a[], int low, int high){
    int partitionIndex; // index of pivot after partition

    if(low < high){
        partitionIndex = partition(a,low,high);  
        quickSort(a, low, partitionIndex-1);    // sort left subarray
        quickSort(a, partitionIndex+1, high);   // sort right subarray
    }
}

int main(){
    int a[] = {2,3,5,1,6,4, -1, 4, 3, 3, 45};
    int size = sizeof(a)/sizeof(a[0]);
    quickSort(a,0, size-1);
    printArray(a,size);
    return 0;
}