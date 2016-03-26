#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,k,ans=-1;
    scanf("%d",&n);

        int m=2*n+1;
         for(i=1;i<=(2*n+1);i++)
    {
        if(i<=n)
            for(j=i;j<=n;j++)
                printf("%c",' ');
        else for(j=n+1;j<i;j++)
            printf("%c",' ');
        ans=-1;
        if(i<=n+1)
        {
            for(j=1;j<2*i;j++)
            {if(j<=i)++ans;
            else --ans;

            if(j==1)printf("%d",0);
           else
             printf("%d",ans);


            }
        }
        else{
            ans=-1;

            m=m-2;
        for(j=1;j<=m;j++)
        {
           if(j<=(m/2+1))++ans;
           else --ans;
           if(j==1)printf("%d",0);
           else
           printf("%d",ans);
        }
    }
    printf("\n");
}
return 0;
}
