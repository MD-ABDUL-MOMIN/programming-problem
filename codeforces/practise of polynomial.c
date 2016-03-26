#include<stdio.h>
int main()
{
    int i,j,N[1000],X,Y=0;
    scanf("%d",&X);
    for(i=0;i<4;i++)
        scanf("%d",&N[i]);
    for(i=3;i>=0;i--)
        Y=N[i]+Y*X;
        printf("%d",Y);
        return 0;
}
