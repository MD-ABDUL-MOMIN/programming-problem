#include<bits/stdc++.h>

using namespace std;
long long int N;
vector<long long int>M[200003];

//map<long long int,pii>A[100000];
pair<long long int,long long int >A[1000000];
int main()
{long long int n,i,j;
  scanf("%lld",&n);
  long long int p=0,q=1,z=0,k=0,L;
for(i=1;i<=n;i++)
{
    scanf("%lld",&N);
    M[N].push_back(i);
    if(M[N].size()==2)
    {
        if(q<=M[N][0])
        {
           ++k;
          A[k]=make_pair(q,M[N][1]);
           //A[k].second=M[N][1];

            q=M[N][1]+1;
            z=1;
       }

     else{
            M[N].clear();
          M[N].push_back(i);
     }


    }
    //else if(M[N[i]][0]<q)
      //  M[N[i]].clear();



}






if(z==0)
    cout<<"-1"<<endl;
    else {
        cout<<k<<endl;
        for(L=1;L<=k;L++)

        cout<<A[L].first<<' '<<A[L].second<<endl;
    }
return 0;





}
