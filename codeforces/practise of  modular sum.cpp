#include<iostream>
#include<cstdio>

using namespace std;
int d[1001],d1[1001];
int main()
{

    int n,m,i,a;
    scanf("%d%d",&n,&m);
    while(n--)
    {
        scanf("%d",&a);
        for(i=0;i<m;i++)
            if(d[i]==1)
                d1[(i+a%m)%m]=1;

        d1[a%m]=1;
        for(i=0;i<m;i++)
            d[i]=d1[i];
            if(d[0]==1)
                break;

    }
    (d[0]==1)?printf("YES\n"):printf("NO\n");
    /*for(i=0;i<=100;i++)
        if(d[i]==1)
        printf("%5d",i);
        */

    return 0;
}
