#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,m;
  int M[101];
    int ans=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)M[i]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            scanf("%d",&m);
            if(m==-1) {if(M[i]==1)M[i]=1;}
            else if(m==0){if(M[i]==1)M[i]=1;
              if(M[j]==1) M[j]=1;}
            else if(m==1&&M[i]==1)M[i]=0;
            else if(m==2&&M[j]==1)M[j]=0;
            else if(m==3){
                    if(M[i]==1)
                    M[i]=0;
                    if(M[j]==1)
                        M[j]=0;
            }

        }
    }
    for(int i=1;i<=n;i++){
            if(M[i]==1)ans+=1;}

cout<<ans<<endl;
for(int i=1;i<=n;i++)
    if(M[i]==1)
    printf("%d ",i);
    return 0;

}

