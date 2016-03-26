#include<stdio.h>
int main()
{
    int N,A[101],i,d;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        scanf("%d",&d);
        A[d]=i;}
    for(i=1;i<=N;i++)printf("%d ",A[i]);
    return 0;
}
