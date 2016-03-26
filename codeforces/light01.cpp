#include<stdio.h>
int main(void)
{
    int n,a,b,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d%d",&a,&b);
        sum=a+b;
        printf("case %d:%d",i,sum);
    }
    return 0;
}

