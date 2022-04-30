#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int i;
    for(i=0;i<=7;i++)
    {
        printf("Address = %u .",&arr[i]);
        printf("Elements = %d %d %d %d\n",arr[i],*(arr+i),*(i+arr),i[arr]);
    }
}