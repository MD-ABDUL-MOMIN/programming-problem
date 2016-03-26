#include<stdio.h>
#include<string.h>
int main()
{
    long long int a,n,d,i,l=0,k=0;

    scanf("%lld",&n);
    getchar();
    char ch[n+1];
    gets(ch);
    for(i=0;i<n;i++)
    {
         if(ch[i]=='0')++l;
         else ++k;
    }
    if(k>l)n=n-l*2;
    else n=n-k*2;
    printf("%lld\n",n);
    return 0;

}

