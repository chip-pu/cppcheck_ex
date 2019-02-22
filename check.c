#include<stdio.h>
int n=10;
int x[10] = {1,2,3,4,5,6,7,0,8,9};
int* append(int ele,int pos);
int main()
{
    int *a;
    printf("Array elements are\n");
    for(int j=0;j<n;j++)
        printf("%d ",x[j]);
    a = append(11,6);
    printf("New array after appending is\n");
    for(int j=0;j<n;j++)
        printf("%d ",a[j]);
    return 0;
}
int* append(int ele,int pos)
{
    int i;
    for(i=n;i>=pos;i--)
        x[i+1] = x[i];
    x[pos] = ele;
    n++;
    return x;
}
