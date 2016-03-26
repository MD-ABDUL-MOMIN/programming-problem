#include<bits/stdc++.h>
/*time limit*/
using namespace std;
int main()
{
    int T,l=1;
    scanf("%d",&T);
    while(l<=T){
    unsigned long long int s,i=1,x=1,y=1,j=0,k=0;
    scanf("%llu",&s);

   // while(i+j<=s)
    //{
       // i+=k;
       // k=k+2;
       // ++j;
    //}
    j=sqrt(s);
    if(j*j<s){

        i=j*j+(j+1);
        j+=1;
    }
    else{
        i=j*j-j+1;
    }
    //cout<<i<<' '<<j<<endl;

   if(j%2==0&&j!=0)
   {
       if(s<i)
       {

           x=j-(i-s);
           y =j;
       }
       else if(s>i)
       {
             x=j;
             y=j-(s-i);
       }
       else x=j,y=j;
    }
    else if(j%2==1&&j!=1)
    {
         if(s<i)
       {

           y=j-(i-s);
           x =j;
       }
       else if(s>i)
       {
             y=j;
             x=j-(s-i);
       }
       else x=j,y=j;
    }

cout<<"Case "<<l<<": "<<x<<' '<<y<<endl;
++l;


    }
    return 0;
}
