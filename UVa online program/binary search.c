#include<stdio.h>
int binary(int n,int N,int D);
int Number[1000],M=0;
int main()
{
    int i,j,k,F,l;
    printf("Enter the desired number\n");
    scanf("%d",&k);
    printf("Enter the amount of numbers\n");
    scanf("%d",&F);
    printf("Enter the series number\n");
    for(i=1;i<=F;i++)
        scanf("%d",&Number[i]);
    l=binary(1,F,k);
    if(l==0)printf("No results");
    else printf("THe location is %d",l);
    printf("\n%d",M);
    return 0;
}
int binary(int n,int N,int D)
{++M;
    int k,j;
    k=n+N;
    if(k%2!=0)k+=1;
    j=k/2;
    if(n==N)return 0;
    if(Number[j]==D)return j;
    else if(Number[j]<D)return binary(j+1,N,D);
    else return binary(n,j-1,D);
}
