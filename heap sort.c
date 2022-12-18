#include<stdio.h>
#include<stdlib.h>
void heapify(int A[],int n,int i)
{
    int largest=i,temp;
    int left = 2*i+1;
    int right = 2*i+2;
    if(left<n && A[left] > A[largest])
    {
        largest=left;
    }
    if(right<n && A[right] > A[largest])
    {
        largest=right;
    }
    if(largest !=i)
    {
        int temp=A[i];
        A[i]=A[largest];
        A[largest]=temp;
        heapify(A,n,largest);
    }
}

void heap_sort(int A[],int n)
{
    int i,temp;
    for(i=n/2-1;i>=0;i--)
    {
        heapify(A,n,i);
    }
    for(i=n-1;i>=0;i--)
    {
        temp=A[0];
        A[0]=A[i];
        A[i]=temp;
        heapify(A,i,0);
    }
}

void main()
{
    int n,i;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    heap_sort(A,n);
    for(i=0;i<n;i++)
    {
        printf("%d\n",A[i]);
    }
}