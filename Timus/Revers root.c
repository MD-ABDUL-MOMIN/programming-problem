#include<stdio.h>
#include<math.h>
int divisor(int N,int F[10001]);
int main()
{
    int i,j=0,Num[11],F[10001];
    for(i=1;i<=10000;i++)F[i]=0;
    for(i=0;i<10;i++){
        scanf("%d",&Num[i]);
        divisor(Num[i],F);
       }
for(i=1;i<=10000;i++)
{
    if(F[i]>0){++j;
    printf("%d\n",i);}
}
//printf("%d\n",j);
return 0;
}
int divisor(int N,int F[10001])
{
    int i,j,limit;
    limit=sqrt(N+1);
    for(i=1;i<=limit;i++)
    {
        F[i]++;F[N/i]++;
    }
    return F[10001];
}
