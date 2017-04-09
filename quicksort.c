#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int partition(int A[], int start, int end){
    int pivot = A[end];
    int pindex = start;
    int i;
    int temp;
    for(i=start;i<end;i++){
        if(A[i] <= pivot){
            temp = A[i];
            A[i] = A[pindex];
            A[pindex] = temp;
            pindex++;
        }

    }
    temp = A[pindex];
    A[pindex] = A[end];
    A[end] = temp;
    return pindex;
};

void quicksort (int A[],int start,int end){
    if(start<end){
            int pindex = partition(A,start,end);
            quicksort(A,start,pindex-1);
            quicksort(A,pindex+1,end);
    }
};

int main(){
    int x[] = {9,5,4,2,6,15,11,12};
    int n = 8;
    quicksort(x,0,n-1);
    int i;
    for(i=0;i<n;i++)
        printf("%d ",x[i]);

    return 0;
}
