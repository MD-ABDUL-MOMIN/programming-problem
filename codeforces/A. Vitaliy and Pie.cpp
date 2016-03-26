#include<bits/stdc++.h>

using namespace std;

int main()
{
    char name[200002];
    long long int n,i,j,L,C[256]={0},ans=0;
    scanf("%lld",&n);
    getchar();
    gets(name);
    L=strlen(name);
    for(i=0;i<L;i++)
    {
        if(i%2==0) ++C[name[i]];
        else {
            if(C[name[i]-'A'+'a']>0)
            --C[name[i]-'A'+'a'];
            else ++ans;
               }
    }

    cout<<ans<<endl;


    return 0;



}
