#include<stdio.h>
int main()
{
    int T,a,b,c,i=1;
    scanf("%d\n",&T);
    while(i<=T)
    {int d=0;
        scanf("%d%d%d",&a,&b,&c);
        if((a>=b&&b>=c)||(c>=b&&b>=a))d=b;
        else if((b>=a&&a>=c)||(c>=a&&a>=b))d=a;
        else d=c;
        printf("Case %d: %d\n",i,d);
        i++;
    }
    return 0;
}
