#include<stdio.h>
int main()
{
    int i,n,num[105],key,sum=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
        sum+=num[i];
    }
    for(i=1;i<n;i++)
    {
        key=num[i];
        j=i-1;
        while(j>=0&&num[j]<key)
        {
            num[j+1]=num[j];
            j=j-1;
            num[j+1]=key;
        }

    }
    int rem=0;
    for(i=0;i<n;i++)
    {
     rem+=num[i];
     if(rem>(sum-rem))break;
    }
    printf("%d",i+1);
    return 0;
}
