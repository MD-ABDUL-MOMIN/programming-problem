#include<bits/stdc++.h>


using namespace std;
 map<long long int,bool>check;

int main()
{
    vector<long long int>N;

    long long int k,n,l=1,m1;

    scanf("%lld%lld",&n,&k);
    m1=k;
    check[1]=true;
    N.push_back(1);
    l=l+k;
    --k;
    N.push_back(l);
    int sig=0;
    long long int M;
    while(k>0)
    {
        if((l-k)>0&&check[l-k]!=true)
        {
            check[l-k]=true;
            N.push_back(l-k);
            l=l-k;
        }
        else  {
            l=l+k;
            check[l+k]=true;
            N.push_back(l);
        }

    --k;




    }
    long long int L;
    for( L=0;L<n;L++)
    {
        if(L<=(m1))
            printf("%lld ",N[L]);
        else {
            printf("%lld ",L+1);
        }
    }

    return 0;

}
