#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,s,u,Max=0,mins=101,p=101;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&s);
        if(Max<s)Max=s;
        if(mins>s)mins=s;
    }
     for(int i=1;i<=m;i++)
    {
        scanf("%d",&u);
       if(p>u)p=u;

    }
    if(Max<p&&(2*mins)<=Max)
        cout<<Max<<endl;
        else if(mins*2<p&&Max<p)
        cout<<2*mins<<endl;
       else cout<<-1<<endl;

    return 0;
}

