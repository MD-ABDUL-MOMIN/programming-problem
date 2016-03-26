#include<stdio.h>
int permutation(int a,int b);
int used[20],number[20];
int main()
{
    int n,i,j;
    scanf("%d",&n);
    permutation(1,n);
    return 0;
}
int permutation(int a,int b)
{
    int i,j;
    if(a==b+1)
    {
        for(i=1;i<=b;i++)printf("%d ",number[i]);
        printf("\n");
        return 0;
    }
    for(i=1;i<=b;i++)
        if(!used[i])
    {
        used[i]=1;
        number[a]=i;
   printf("%d ",number[i]);
        printf("\n");
        permutation(a+1,b);
        used[i]=0;printf("%d ",number[i]);
    }
}
