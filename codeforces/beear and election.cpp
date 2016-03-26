#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
   int n,N[101],i,j,p,sum=0,ans=0,signal=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&N[i]);

        rep:
        int l=1;
        p=N[l];
        for(i=2;i<n;i++)
        {
            if(p<N[i])
            {
                p=N[i];
                l=i;
            }
        }
        if(N[0]>p)
        {
            printf("%d\n",sum);
        }
        else {
            --N[l];
            ++N[0];
            ++sum;
            goto rep;
        }

    return 0;
}
