#include<stdio.h>
int main()
{
    int arr[3][5]={
        {1,2,3,4,5},
        {4,5,6,7,8},
        {7,8,9,1,2}
        };
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}