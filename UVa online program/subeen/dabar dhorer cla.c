#include<stdio.h>
int main()
{
    int T,x=1;
    scanf("%d",&T);
    while(x<=T)
    {
        int r1,r2,c1,c2;
        scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
        int i=0,Y,r,t;
        while(r1!=r2&&c1!=c2)
        {
            if(r1<r2)++r1;
            else --r2;
            if(c1<c2)++c1;
            else --c2;
            ++i;
        }
        t=r1-r2;if(t<0)t=t*(-1);
        printf("\n%d\t",t);
        r=c1-c2;if(r<0)r=r*(-1);printf("%d\n",r);
        Y=t+r+i;
        printf("Case %d: %d\n",x,Y);
        x++;

    }
    return 0;
}
