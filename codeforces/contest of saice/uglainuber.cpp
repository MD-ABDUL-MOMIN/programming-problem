#include<bits/stdc++.h>

using namespace std;
int main()
{

  int n,i=0,j;
  long long int d=0,l;
 cin>>n;
  while(i<=n)
  {
++d;

   j=0;
   l=d;
   if(l==1)j=0;
   else{
        int k=1;


      while(++k<l/2)
      {
          if(d%k==0&&k==2){j=0;continue;}
          if(d%k==0&&k==3){j=0;continue;}
          if(d%k==0&&k==5){j=0;continue;}
          if(d%k==0&&k!=5&&k!=2&&k!=3){j=1;}
          else j=1;



      }
   }
   if(j==0){++i;cout<<d<<endl;}

  }

 printf("The %d'th ugly number is <%lld>.\n",i-1,d-1);



return 0;
}
