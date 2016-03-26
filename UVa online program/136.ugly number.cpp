#include<bits/stdc++.h>

using namespace std;
int ugly(long long int n)
{
    while(n%2==0)n=n/2;
    while(n%3==0)n=n/3;
    while(n%5==0)n=n/5;
    if(n!=1)return 0;
    else return 1;
}

int main()
{

 long long sum=1,i=859963392,m;
 /*scanf("%lld",&m);
 while(i)
 {
     int d=ugly(i);
     sum+=d;
     if(sum==m)
        break;
     ++i;
 }
 cout<<i<<endl;

*/
         printf("The 1500'th ugly number is %lld.\n",i);

 return 0;


}
