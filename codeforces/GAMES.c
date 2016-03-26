#include<stdio.h>
int main()
{
    int n,i=0,j,h[35],a[35],k=0;
    scanf("%d",&n);
    while(i<n)
    {
        scanf("%d%d",&h[i],&a[i]);i++;    }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(h[i]==a[j])++k;
            }
        }
        printf("%d",k);
        return 0;
}
