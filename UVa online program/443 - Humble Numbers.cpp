#include<bits/stdc++.h>

using namespace std;

int main()
{
   int n,i=1;
   string s;

   unsigned long int H[5844];
   H[0]=1;
   int two=0;
     int three=0;
       int five=0;
  int seven=0;


  //cout<<"HUMble "<<H[0]<<endl;
   while(i<5842)
   {
       H[i]=min(min(2*H[two],3*H[three]),min(5*H[five],7*H[seven]));
      // cout<<"TWO "<<two<<" Three "<<three<<" five "<<seven<<endl;
       if(H[i]==2*H[two])++two;
       if(H[i]==3*H[three])++three;
       if(H[i]==5*H[five])++five;
       if(H[i]==7*H[seven])++seven;

       ++i;
   }
   while(scanf("%d",&n)==1&&n!=0){
   if(n%100>=11&&n%100<=20)s="th";
   else if(n%10==1)s="st";
   else if(n%10==2)s="nd";
   else if(n%10==3)s="rd";
   else s="th";
      cout<<"The "<<n<<s<<" humble number is "<<H[n-1]<<'.'<<endl;
   }
   return 0;
}
