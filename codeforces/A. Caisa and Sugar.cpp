#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d,ans=-1,P,C,M;
    scanf("%d%d",&n,&d);
    for(int i=1;i<=n;i++)
    {
        scanf("%d%d",&P,&C);
        M=0;

    if((P==d&&C==0)||P<d){
            M=(100-C)%100;


             if(ans<M)ans=M;
             }

    }
 printf("%d\n",ans);

    return 0;
}
