#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int *p=&arr[7];
    for(int i=8;i>0;i--)
    {
        printf("%d ",*p);
        --p;
    }
}