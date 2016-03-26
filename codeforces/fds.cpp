#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long int n,A[100002],i,sum=0,x=0;
    int mark[101]={0};
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&A[i]);
        if(A[i]==25)++mark[A[i]];
        else if(A[i]==50)
        {
            --mark[25];
            if(mark[25]<0)x=1;
            ++mark[50];
        }
        else {
            if(mark[25]>0&&mark[50]>0)
            {
                --mark[25];
                --mark[50];
                ++mark[100];
            }
            else if(mark[25]>=3)
            {
                mark[25]-=3;
                ++mark[100];

            }
            else{
                x=1;
            }

            }

        }

    if(x==0)printf("YES\n");
    else printf("NO\n");

    return 0;


}

