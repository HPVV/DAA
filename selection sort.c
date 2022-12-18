#include<stdio.h>
void main()
{
    int i,j,n,min_idx,temp;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++)
    {
        min_idx=i;
        for(j=i+1;j<n;j++)
        {
            if(A[j] < A[min_idx])
            {
                min_idx=j;
            }
        }
        if(i!=min_idx)
        {
            temp=A[i];
            A[i]=A[min_idx];
            A[min_idx]=temp;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",A[i]);
    }
}