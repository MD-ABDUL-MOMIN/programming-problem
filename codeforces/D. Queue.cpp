#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,i,Time,sum=0,member=0,j;
    vector<long long int>line;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&j);
        line.push_back(j);

    }
    sort(line.begin(),line.end());
    sum=0;
    for(size_t k=0;k<n;k++)
    {
        if(sum<=line[k]) {++member;
            sum+=line[k];
        }
    }
    printf("%lld\n",member);

    return 0;
}
