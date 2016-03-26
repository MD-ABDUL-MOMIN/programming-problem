#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,x,i,j,Te=0;
    vector<long long int>N,V,m;
    scanf("%lld%lld",&n,&x);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&j);
        N.push_back(j);
    }
    sort(N.begin(),N.end());

    for(size_t k=0;k<N.size();k++)
    {
        long long int tem;
        if(x>1)
           {tem=N[k]*x;}
        else {tem=N[k];x=1;}
        if(Te<tem)Te=tem;
        V.push_back(tem);
      --x;


    }
    int len=0;
while(Te>0){++len;Te=Te/10;}

    int point=1;
    long long int rem=0;
     long long int sum=0;

    while(point<=(len))
    {
          sum=0;
        for(size_t k=0;k<V.size();k++)
        {
            sum+=(V[k]%10);
            V[k]=V[k]/10;
        }
        sum+=rem;
        m.push_back(sum%10);
        rem=sum/10;
       ++point;

    }
    if(rem!=0) m.push_back(rem);
     for(int p=m.size()-1;p>=0;p--)
        cout<<m[p];



return 0;
}
