#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
    int a,b,c,d,D,E;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    D=max(a*3/10,(a-(a*c)/250));
    E=max(b*3/10,(b-(b*d)/250));
    if(D<E)printf("Vasya\n");
    else if(D==E)printf("Tie\n");
    else printf("Misha\n");

    return 0;

}
