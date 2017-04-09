#include<stdio.h>

int findroationcount(int A[],int n)
{
    int low = 0;
    int high  = n-1;
    while(low<=high)
    {
        if(A[low] <= A[high])
            return low; //Not roatated
        int mid = (low+high)/2;
        int next = (mid+1)% n;
        int prev = (mid+n-1)% n;
        if(A[mid] <= A[next] && A[mid] <= A[prev])
            return mid;
        else if (A[mid] <= A[high])
            high = mid -1;
        else if (A[mid] >= A[low])
            low = mid+1;

    }
    return -1;
};

int main()
{

    int A[] = {1,5,6,8,10,12,15,22,23,28,31};
    int count = findroationcount(A,11);
    printf("%d",count);
}
