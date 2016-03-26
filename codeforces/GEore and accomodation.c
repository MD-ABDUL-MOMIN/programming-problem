#include<stdio.h>
int main()
{
    int n,p,q,t=0;
    scanf("%d",&n);
    while(n-->0)
    {
        scanf("%d%d",&p,&q);
        if((q-p)>=2)++t;
    }
    printf("%d",t);
    return 0;
}
