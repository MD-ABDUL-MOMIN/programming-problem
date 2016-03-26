#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N[2001],n,Min=1003,f=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&N[i]);
        int p;
    for(int i=1;i<n-1;i++)
    {  f=0;
        for(int j=1;j<n;++j)
        {
            if(j==i)
            {
                p=N[j+1]-N[j-1];
                ++j;
            }
            else p=N[j]-N[j-1];
            if(f<p)f=p;

        }
        if(Min>f)Min=f;
    }
    cout<<Min<<endl;

    return main();
}
