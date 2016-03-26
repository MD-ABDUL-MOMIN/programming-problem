#include<bits/stdc++.h>

using namespace std;

vector<long long int>Prime;

void prime()
{
    Prime.push_back(2);
    bitset<10000000>Mark;
    //cout<<Mark[0]<<endl;

    for(long long int i=3;i<=31623;i+=2)
    {
        if(Mark[i]==0)
        {
            Prime.push_back(i);
            for(long long int j=i*i;j<=31624;j+=i)
            Mark[j]=1;
        }

    }
}

int main()
{
    long long int i,t;
    prime();
    scanf("%lld",&t);
    while(t--)
    {
        long long int N,M;
        scanf("%lld%lld",&N,&M);
        if(N>M)swap(N,M);
        int MN[1000002];
        memset(MN,0,sizeof(MN));


         //if(N==2)MN[2-N]=0;
        // else MN[2-N]=1;
      //  long
        for(i=0;Prime[i]<=sqrt(M);i++)
        {

            //if(Prime[i]>=N) MN[Prime[i]-N]=0;
           long long int P=ceil(N*1.00/Prime[i]);
           //if(P==1)++P;

           for(long long int j=P*Prime[i];j<=M;j+=Prime[i])
           {
               if(j>=N&&j<=M)   MN[j-N]=1;
               else MN[j-N]=0;
           }


        }


        for(long long int i=N;i<=M;i++)
        {
            if(MN[i-N]==0)
            cout<<i<<endl;


        }

        cout<<endl;

    }

return 0;
}
