#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,ans;
    scanf("%d",&n);
 (n%2==0)?ans=(n/2)*n:ans=(n/2+1)*(n/2+1)+(n/2)*(n/2);

    printf("%d\n",ans);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
           {
            if((i+j)%2==0)printf("C");
             else printf(".");
           }
        printf("\n");
    }
    return 0;
}
