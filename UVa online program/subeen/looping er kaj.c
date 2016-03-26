#include<stdio.h>
int main()
{
    int T,l=1;
    scanf("%d",&T);
    while(l<=T)
    {
        int a,b,c,i,j,k;
        scanf("%d%d%d",&a,&b,&c);
        printf("Case %d:\n",l);
        for(i=0;i<=a;i++)
        {
            for(j=i;j<=b;j++)
            {
                for(k=j;k<=c;k++)
                    if(i<j&&j<k)printf("%d %d %d\n",i,j,k);


            }

        }
        ++l;
    }
    return 0;
}
