#include<stdio.h>
int main()
{
    int i,j,n,num[100],temp;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("Enter the numbers\n");
    for(i=0;i<n;i++)
        scanf("%d",&num[i]);
    for(i=0;i<n-1;i++)
    {
        j=i+1;

        while(j>=0&&num[j]>num[j-1])
        {
            temp=num[j];
            num[j]=num[j-1];
            num[j-1]=temp;
            j=j-1;
        }
    }
    printf("The numbers are given below?");
    for(i=0;i<n;i++)
    printf("%d ",num[i]);
    return 0;
}
