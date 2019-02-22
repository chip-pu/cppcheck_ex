#include<stdio.h>
int n=10;
int* append(int ele,int pos);
int main()
{
    int x[9] = {1,2,3,4,5,6,7,0,8,9};
    printf("Array elements are\n");
    for(int j=0;j<n;j++)
        printf("%d ",x[j]);
    x = append(11,6);
    printf("New array after appending is\n");
    for(int j=0;j<n;j++)
        printf("%d ",x[j]);
    return 0;
}
int* append(int ele,int pos)
{
    int i,a[20];
    for(i=n;i>=pos;i--)
        a[i+1] = a[i];
    a[pos] = ele;
    n++;
    return a;
}
