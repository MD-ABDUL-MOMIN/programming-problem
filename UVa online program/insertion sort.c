#include<stdio.h>
int main()
{
    int a[20],i,j,n,key;
    printf("Enter the number of element of array ");
    scanf("%d",&n);
    printf("\nEnter the elements ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(j=1;j<n;j++)
    {
        key=a[j];
        i=j-1;
        while(i>=0&&a[i]<key)
        {
            a[i+1]=a[i];
            i=i-1;
           a[i+1]=key;
        }
    }
    printf("the incresing numbers are given below\n");
    for(i=0;i<n;i++)
    printf("%3d",a[i]);
    return 0;
}
