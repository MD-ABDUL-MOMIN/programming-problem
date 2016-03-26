#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N,sum;
    while(scanf("%d",&N)==1)
    {sum=N;
    while(N>2)
    {
        sum+=(N/3);
        N=N/3+(N%3);
    }
    if(N==2)sum+=1;
    cout<<sum<<endl;
    }
 return 0;
}
