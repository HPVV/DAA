#include<stdio.h>

void bubblesort(int array[], int number)
{
    int i,j,temp;
    for(i=0;i<number-1;i++)
    {
        for(j=0;j<number-1;j++)
        {
            if(array[j] > array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}

void main()
{
    int number,i;
    scanf("%d",&number);
    int array[number];
    for(i=0;i<number;i++)
    {
        scanf("%d",&array[i]);
    }
    bubblesort(array,number);
    for(i=0;i<number;i++)
    {
        printf("%d\n",array[i]);
    }
    return 0;
}