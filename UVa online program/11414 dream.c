#include<stdio.h>
int main()
{
    int n;
    scanf("%d\n",&n);
    while(n-->0)
    {int a[1000],l,k=0,i,j;
        scanf("%d",&l);
        for(i=0;i<l;i++)
        scanf("%d",&a[i]);
        for(i=0;i<l-1;i++)
        {
            for(j=l-1;j>i;j--)
            {
                if((a[i]==a[j])||(a[j]<0||a[i]<0))
                {
                    k=1;break;
                }
            }

        }
        if(k==1)printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}
