#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,mid,d=0,A=0,B=0;
    scanf("%d%d",&a,&b);
   if(a<b)mid=(b-a);
   else mid=a-b;
   if(mid==0)d=6;
   else{
     if(mid%2!=0)d=0;
   else d=1;

   (a+b)%2==0?A=(a+b)/2-d:A=(a+b)/2;
   B=6-(A+d);
   if(a>b){int temp=A;A=B;B=temp;}

 }
   cout<<A<<' '<<d<<' '<<B<<endl;

   return 0;
}
