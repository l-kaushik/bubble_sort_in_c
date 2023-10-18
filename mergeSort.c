#include<stdio.h>
#include<stdlib.h>

void printArray(int A[], int n){
    for(int i = 0; i<n; i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}

void merge(int a[], int low, int mid, int high){
    int i,j,k;
    int b[high];
    i = low;
    j = mid+1;
    k = low;

    // copying smaller elements to array b
    while(i <= mid && j <= high){
        if(a[i] < a[j]){
            b[k] = a[i];
            i++; k++;
        }
        else{
            b[k] = a[j];
            j++; k++;
        }
    }

    // copying rest of the elements to array b 
    while(i <= mid){
        b[k] = a[i];
        k++; i++;
    }

    while(j <= high){
        b[k] = a[j];
        j++; k++;
    }

    // moving to array a
    for(i = low; i<= high; i++){
        a[i] = b[i];
    }
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
    mergeSort(a,0,6);
    printArray(a,6);
    return 0;
}