#include<stdio.h>

int BinarySearch(int A[],int n, int x){
    int low = 0;
    int high = n-1;

    while(low<=high){
    int mid = low + (high-low)/2;
    if(x==A[mid])
        return mid; //Found
    else if (x<A[mid])
        high = mid-1;
    else
        low = mid+1;
}
return -1; //Not Found
};

int main()
{
    int A[] = {2,4,6,8,10,12,13,15};
    printf("Enter a number ");
    int x;
    scanf("%d", &x);
    int index = BinarySearch(A,8,x);
    if(index != -1)
        printf("Element found at index %d",index);
    else
        printf("Element not found");

    return 0;

}
