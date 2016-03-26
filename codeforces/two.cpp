#include<bits/stdc++.h>

using namespace std;

int main()
{
    string ch,ch1;
    cin>>ch;
    ch1=ch;
    int L=ch.size(),a=0,b=0,c=0,d=0,e=0,l3,l4,L1,f,g;
    L1=L;

     if(L>=2)
   {

          int l= ch.find("AB");
           if(l>=0){a=1;}
            int l1=ch.find("BA");
            if(l1>=0){b=1;ch.erase(l1,2);}
              e=0,d=0;
             f= ch1.find("BA");
             cout<<"ch1"<<ch1<<f<<endl;

           if(f>=0){ch1.erase(f,2);d=1;}
            g=ch1.find("AB");
            if(g>=0){e=1;ch1.erase(g,2);}
            cout<<"ch1"<<ch1<<g<<endl;
            L=ch.size();
            L1=L;
   }
   cout<<ch<<' '<<ch1<<L<<endl;
    if(L>=3){
     l3=ch.find("ABA");
     cout<<l3<<endl;
     if(l3==-1)
       l3=ch.find("BAB");
       if(l3==-1)
          l3=ch1.find("ABA");
       if(l3==-1)ch1.find("BAB");

         if(l3>=0)
             c=1;
    }
    cout<<a<<b<<c<<d<<e<<endl;

   if(((a==1&&b==1)||(d==1&&e==1))||(c==1&&(((a==1||b==1))||(d==1||e==1))))printf("YES\n");
   else
   printf("NO\n");





    return 0;


}
