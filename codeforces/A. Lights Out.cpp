#include<bits/stdc++.h>

using namespace std;
int ch[4][4];
int main()
{
    int i,j,k,ans;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            scanf("%d",&k);

                ch[i][j]+=k;
                 ch[i][j+1]+=k;
                   ch[i][j-1]+=k;
                  ch[i-1][j]+=k;
                  ch[i+1][j]+=k;
        }
    }
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            if(ch[i][j]%2==0)
                printf("1");
            else printf("0");
        }
        printf("\n");
    }
    return 0;
}
