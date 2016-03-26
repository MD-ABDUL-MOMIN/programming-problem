#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j;
    scanf("%d",&n);
    if(n%2==1)printf("-1\n");
    else for(i=n;i>=1;i--)
        if(i!=1)printf("%d ",i);
        else printf("%d\n",i);

    return 0;
}
