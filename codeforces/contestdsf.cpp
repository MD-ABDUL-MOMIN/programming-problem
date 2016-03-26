#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ll b,c,x,y,z,A,B,C,sum=0,d[3],sig=0,p=0,q=0,r=0;
    pair<long long int,long long int>name[3];
    scanf("%lld%lld%lld",&A,&B,&C);
    scanf("%lld%lld%lld",&x,&y,&z);
   if(A>=x){sum+=(A-x)/2;++sig;p=1;}

   if(B>=y){sum+=(B-y)/2;q=1;}

   else if((B+sum)>=y){sum=(B+sum-y)/2;++sig;q=1;}

   if(C>=z){sum+=(C-z)/2;r=1;}
   else if((sum+C)>=z)
   {

       sum=(sum+c-z)/2;r=1;
   }

   if(p==0&&(A+sum)>=x)
   {
       p=1;
       sum=(A+sum-x)/2;
   }
   if(q==0&&(B+sum)>=y)
   {
       q=1;
       sum=(sum+b-y)/2;
   }
   if(r==0&&(C+sum)>=z)
   {
       r=1;
       sum=(sum+c-z)/2;
   }
   if(p==1&&q==1&&r==1)

       printf("Yes\n");
else printf("No\n");

    return 0;





}
