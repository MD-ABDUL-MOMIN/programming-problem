#include<iostream>
#include<cstdio>
#include<math.h>

using namespace std;

int used[100001];

int main()
{
    int n,j,i,t=1;
    scanf("%d",&n);

        int num[1001],l=0,tem;
    for(i=2;i<=n;i++)
    {
        t=1;
        for(j=2;j<=sqrt(i);j++)t=t&&(i%j);
        if(t)
        for(int k=i;k<=n;k*=i)
        num[l++]=k;

    }

      //if(n%2==1)n+=1;
    /*for(i=2;i<=n/2;i++)
    {
        for(j=n;j>i;j--)
        {
            if(j%i==0&&j/i!=i&&used[j]==0)
            {
                used[j]=1;
            }

        }
    }



    for(int i=2;i<=n;i++)
    {
        if(used[i]==0)
        {
            ++l;
            num[l]=i;
        }
    }*/
    printf("%d\n",l);
    for(int i=0;i<l;i++)
        printf("%d ",num[i]);

    return 0;
}

