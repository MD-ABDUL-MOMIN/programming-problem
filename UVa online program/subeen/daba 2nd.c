#include<stdio.h>
int main()
{
    int x=1,T;
    scanf("%d",&T);
    while(x<=T)
    {
        int r1,c1,r2,c2,r,c,Y;
        scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
        if(r2>r1)r=r2-r1;
        else r=r1-r2;
        if(c2>c1)c=c2-c1;
        else c=c1-c2;
        if(c>r)Y=c;
        else Y=r;
         printf("Case %d: %d\n",x,Y);
        x++;
    }
    return 0;
}

