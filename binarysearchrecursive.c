#include<stdio.h>

int binarysearch(int A[],int start,int end,int x)
{
    if(start>end)
        return -1;
    else {
    int mid = (start+end)/2;
    if(x == A[mid])
        return mid;
    else if(x<A[mid])
        binarysearch(A,start,mid-1,x);
    else
        binarysearch(A,mid+1,end,x);
    }
};

int main()
{
    int A[] = {2,4,10,10,10,10,13,15};
    printf("Enter a number ");
    int x;
    scanf("%d", &x);
    int index = binarysearch(A,0,7,x);
    if(index != -1)
        printf("Element found at index %d",index);
    else
        printf("Element not found");

    return 0;

}
