#include<bits/stdc++.h>
#include<vector>

//using namespace std;
/*
int main()
{

    int n;
    long long int M,W[10002],k,Q,sum=0,a=1,num[10002];
    num[0]=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%lld",&W[i]);
        sum+=W[i];
        num[i]=sum;
        //cout<<' '<<num[i]<<endl;

    }
     scanf("%lld",&M);
    for(k=1;k<=M;k++)
    {
        scanf("%lld",&Q);
        for(int i=1;i<=n;i++)
        {
            if((num[i-1]+1)<=Q&&Q<=num[i])
            {
                printf("%d\n",i);
                break;
            }

        }

    }

    return 0;

}
*/

using namespace std;
//int A[1000002];
int main()
{
    int n;
    long long int M,k,Q,sum=0,a=1,W;
    vector<int>x;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%lld",&W);
            for(int j=0;j<W;j++){x.push_back(i);}
    }
    scanf("%lld",&M);
    for(k=1;k<=M;k++){
        scanf("%lld",&Q);
        printf("%d\n",x[Q-1]);
    }


    return 0;
}

