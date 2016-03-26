#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int sQ(long long int N)
{
    int l;
    l=sqrt(N);
    return l;
}
int main()
{
    long long int i,j,k=1,ans;
   while(k<=201)
   {
       scanf("%lld%lld",&i,&j);
       if(i==0&&j==0)break;
       ans=sQ(j)-sQ(i);
       if(sQ(i)*sQ(i)==i)ans+=1;
       cout<<ans<<endl;
       k++;

   }

    return 0;

}

