#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int N[22]={0},n,i,k,a=0,b=0,c=0;
    for(scanf("%d",&n),i=1;i<=n;scanf("%d",&k),i%3==1?a+=k:i%3==2?b+=k:c+=k,++i);
    int d=max(a,max(b,c));
    if(a==d)printf("chest\n");
    else if(b==d)printf("biceps\n");
    else printf("back\n");
    return 0;

}
