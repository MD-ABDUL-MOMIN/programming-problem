#include<stdio.h>
int main()
{
    int a,b,c,T,i=1;
    scanf("%d",&T);
    while(i<=T)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a>b&&b>c)printf("Case %d: %d %d %d\n",i,c,b,a);
        else if(c>b&&b>a)printf("Case %d: %d %d %d\n",i,a,b,c);
        else if(c>a&&a>b)printf("Case %d: %d %d %d\n",i,b,a,c);
        else if(b>a&&a>c)printf("Case %d: %d %d %d\n",i,c,a,b);
        else if(a>c&&c>b)printf("Case %d: %d %d %d\n",i,b,c,a);
    else printf("Case %d: %d %d %d\n",i,a,c,b);
    ++i;

    }
    return 0;
}
