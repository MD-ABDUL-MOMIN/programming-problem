#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<long long int>ans;
    int a,b,c;

    long long int N=1,m;
    scanf("%d%d%d",&a,&b,&c);
    for(int i=1;i<=81;i++)
    {
        N=1;
        for(int j=1;j<=a;j++)
            N*=i;
        m=b*N+c;
        if(m>0){
        int sum=0;
        long long int ans1=m;
    //cout<<ans1<<endl;

        while(m>0)
        {
         sum+=(m%10);
         m=m/10;
        }

        if(sum==i&&ans1>0&&ans1<1000000000)
        ans.push_back(ans1);
        }

    }
   cout<<ans.size()<<endl;
    for(int it=0;it<ans.size();it++)
        {
        cout<<ans[it]<<' ';
        }

    //if(ans[0]=='\0'){int n=0;    }




    return 0;



}
