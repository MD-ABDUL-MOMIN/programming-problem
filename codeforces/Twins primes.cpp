/*#include<iostream>
#include<cstdio>
#include<set>
using namespace std;
 int mark[1000004];
 set<long long>prime;
int main()
{
    int t;
    unsigned long long int j;
    for(int i=2;i<=1000000;i++)
    {
        if(!mark[i]){

            prime.insert(i*i);
        for(j=i*i;j<=1000000;j+=i)
        {
            mark[j]=1;
        }

                     }
    }
  long long int n;
   scanf("%d",&t);
  while(t-->0)
  {
        scanf("%I64d",&n);
       if(prime.count(n))
        printf("YES\n");
       else printf("NO\n");
        }

  /*  while(n-->0)
    {
       scanf("%I64d",&L);
        if(L==1)
            printf("NO\n");
        else{
        M=sqrt(L);
        if(prime[M]==L)
            printf("YES\n");
        else printf("NO\n");
        }


    }
    */
    //return 0;
   // }
   // */
/*
#include<stdio.h>
#include<set>
using namespace std;
int v[1000020],t;
long long i,j,n;
set<long long>s;
int main()
{
    s.insert(1);
    for(i=2;i<=1000000;i++)
        if(!v[i])
        {
            s.insert(i*i);
            for(j=i*i;j<=1000000;j+=i)
                v[j]=1;
        }
       scanf("%d",&t);
       while(t>=1)
       {
           scanf("%I64d",&n);
           if(s.count(n))
            printf("YES\n");
           else printf("NO\n");
           t--;
       }
       return 0;
}
*/
#include<stdio.h>
#include<set>
int v[1000020],t;
long long i,j,n;
std::set<long long>s;
int main()
{
    for(i=2;i<=1000000;i++)
        if(!v[i])
        {
            s.insert(i*i);
            for(j=i*i;j<=1000000;j+=i)
                v[j]=1;
        }
    for(scanf("%d",&t);t--;puts(s.count(n)?"YES":"NO"))
        scanf("%I64d",&n);
}
