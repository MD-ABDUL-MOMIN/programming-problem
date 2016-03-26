#include<stdio.h>
int main()
{
    long long int num[101][101],i,j,q,n,m,p=0,S[101]={0};
    scanf("%lld%lld",&n,&m);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
      scanf("%lld",&num[i][j]);
    }
    p=0;

    for(i=0;i<m;i++)
    {
        q=0;
        p=num[i][q];
        for(j=1;j<n;j++)
           if(p<num[i][j])
           {
               p=num[i][j];
               q=j;
           }
           S[q]++;

    }
    i=0;
    q=0;
    p=S[i];
    for(i=1;i<n;i++)
    {
        if(p<S[i])
        {
            p=S[i];
            q=i;
        }

    }
    q=q+1;
    printf("%lld\n",q);
    return 0;
}
