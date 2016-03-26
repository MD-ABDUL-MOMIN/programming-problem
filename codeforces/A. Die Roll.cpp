#include<bits/stdc++.h>

using namespace std;

int gcd(int a,int b)
{
    if(b==0)return a;
    gcd(b,a%b);
}

int main()
{
    int w,y,a1,a2;
    scanf("%d%d",&w,&y);
    a1=(6-max(w,y)+1);
    int tem=a1;
    a1=a1/gcd(a1,6);
    a2=6/gcd(tem,6);

    printf("%d%c%d\n",a1,'/',a2);

    return 0;
}
