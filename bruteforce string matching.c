#include<stdio.h>
#include<string.h>
void main()
{
    char string[25];
    char substring[6];
    scanf("%s",string);
    scanf("%s",substring);
    int a = strlen(string);
    int b = strlen(substring);
    for(int i=0;i<=a-b;i++)
    {
        int j=0;
        while(j<b && substring[j]==string[i+j])
        {
            j++;
        }
        if(j==b)
        {
            printf("%d",i);
            return;
        }
    }
    printf("-1");
    return;
}