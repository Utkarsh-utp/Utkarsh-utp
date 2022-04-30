#include<stdio.h>
int main()
{
    int sum=0,i,j,k,arr[2][2][2]={
        {{2,2},{2,2}},
        {{3,3},{3,3}},
    };
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            sum=sum+arr[i]*arr[j];
        }
    }
    for(j=0;j<2;j++)
    {
        for(i=0;i<2;i++)
        {
            sum=sum+arr[i]*arr[j];
        }
    }
    printf("%d",sum);
}