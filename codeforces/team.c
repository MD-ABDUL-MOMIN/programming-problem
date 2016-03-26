#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    int num[1006][3],sum=0,k=0,i,j;
    for(i=0;i<T;i++)
    {sum=0;
        for(j=0;j<3;j++){
            scanf("%d",&num[i][j]);
            sum+=num[i][j];}
            if(sum>=2)++k;
            }
            printf("%d",k);
    return 0;
}
