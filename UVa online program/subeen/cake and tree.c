#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T-->0)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if((b>=(2*a))&&(c>=(2*a)))
            printf("YES\n");
        else printf("NO\n");

    }
    return 0;

}
