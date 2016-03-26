#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    char ch[302][302];
    int i,j,k,n,sig=0,num[256]={0};
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            scanf("%c",&ch[i][j]);
            num[ch[i][j]]++;
        }
    }

      int  l=1,tem;
      tem=n;
      int p=1,q=1;
          while(l<n)
          {
             if(ch[p][q]==ch[p+1][q+1]&&ch[l][tem]==ch[l+1][tem-1])
             {
                 ++l;
                 --tem;
                 ++p;
                 ++q;
             }
             else {
                sig=1;break;
             }

          }
    if(sig==0&&num[ch[1][2]]==(n*n+1-n*2))
        printf("YES\n");
    else printf("NO\n");
    return 0;

}
