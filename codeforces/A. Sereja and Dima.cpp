#include<bits/stdc++.h>

using namespace std;
#define P(a,b)printf("%lld %lld\n",a,b)
int main()
{
    int n,m,i,j,N[1002]={0},a;
    long long int A=0,B=0,C=0;
    for(scanf("%d",&n),i=1;i<=n;scanf("%d",&N[i]),++i);

    i=1;j=n;
    int k=0;
    while(i<=j)
    {
        if(k==0){
        N[i]>N[j]?(A+=N[i],++i):(A+=N[j],--j);
        k=1;

        }
        else{
        N[i]>N[j]?(B+=N[i],++i):(B+=N[j],--j);
        k=0;
        }
         //cout<<N[i]<<' '<<N[j]<<endl;
    }


    P(A,B);

    return 0;

}
