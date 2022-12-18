#include<math.h>
#include<stdio.h>

void insertionsort(int array[], int n)
{
    int i,key,j;
    for(i=1;i<n;i++)
    {
        key=array[i];
        j=i-1;
        while(j>=0 && array[j] > key)
        {
            array[j+1] = array[j];
            j=j-1;
        }
        array[j+1]=key;
    }
}

void printarray(int array[], int n)
{
    int i;
    for(i=0;i<n;i++)
    printf("%d\n",array[i]);
    printf("\n");
}

void main()
{
    int n,i,temp;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&temp);
        array[i]=temp;
    }
    insertionsort(array,n);
    printarray(array,n);
}

