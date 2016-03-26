#include<stdio.h>
int gcd(int a,int b);
int main()
{
    int a,b,n,p;
    scanf("%d%d%d",&a,&b,&n);
    while(n>0)
    {
        n=n-gcd(n,a);
        if(n>=0)p=1;
        n=n-gcd(n,b);
        if(n>=0)p=0;
    }
    if(p==1)printf("0");
    else printf("1");
    return 0;
}
int gcd(int a,int b)
{        int d;
    while(b>1)
    {d=a%b;
    if(d==0){b;break;}
    a=b;
    b=d;
    }
    return b;
}
