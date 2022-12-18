#include<stdio.h>
#define MAX 100

void merge(int A[],int low,int mid,int high)
{
  int i,j,k;
  int temp[MAX];
  k=low;
  i=low;
  j=mid+1;
  while((i<=mid)&&(j<=high))
  {
      if(A[i]<=A[j])
      {
          temp[k]=A[i];
          i++;
          k++;
      }
      else
      {
          temp[k]=A[j];
          j++;
          k++;
      }
  }  
  while(i<=mid)
  {
      temp[k]=A[i];
      i++;
      k++;
  }
  while(j<=high)
  {
      temp[k]=A[j];
      j++;
      k++;
  }
  for(k=low;k<=high;k++)
  {
      A[k]=temp[k];
  }
}
void merge_sort(int A[],int low,int high)
{
    int m;
    if(low<high)
    {
        m=(low+high)/2;
        merge_sort(A,low,m);
        merge_sort(A,m+1,high);
        merge(A,low,m,high);
    }
}

int main()
{
    int i,n;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    merge_sort(A,0,n-1);
    for(i=0;i<n;i++)
    {
        printf("%d\n",A[i]);
    }
    return 0;
}