#include<stdio.h>

int Array(int N[],int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum+=N[i];
       printf("%d\n",N[i]);
    }
    return sum;
}
int main()
{
    int i,j,k,number[100],sum=0;
    printf("Enter the amount of number of array : ");
       scanf("%d",&k);
    for(i=0;i<k;i++)
    scanf("%d",&number[i]);
    sum=Array(number,k);
    printf("The summation of array is %d",sum);
    return 0;
}
