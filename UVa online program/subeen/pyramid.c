#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T-->0)
    {
        int n,i,j,p=1;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=(n-i);j++)
                printf("%c",' ');
            for(j=1;j<=p;j++)
                printf("%c",' *');
            printf("\n");
            p+=2;
        }
    }
    return 0;
}
