#include<bits/stdc++.h>
#include<string>

using namespace std;

int main()
{
    string N;
    while(cin>>N)
    {
        int len,sig=0,Mark[8]={0};
        string n;
        len=N.size();
       for(int i=0;i<len;i++)
       {
           if((N[i]=='B'||N[i]=='F'||N[i]=='P'||N[i]=='V'))
           { if(Mark[1]==0)
               {n+='1';Mark[1]=1;Mark[2]=0;Mark[3]=0;Mark[4]=0;Mark[5]=0;Mark[6]=0;}
               continue;

           }
        if((N[i]=='C'||N[i]=='G'||N[i]=='J'||N[i]=='K'||N[i]=='Q'||N[i]=='S'||N[i]=='X'||N[i]=='Z'))
            {if(Mark[2]==0){n+='2';Mark[2]=1;Mark[1]=0;Mark[3]=0;Mark[4]=0;Mark[5]=0;Mark[6]=0;}
            continue;}
           else if((N[i]=='D'||N[i]=='T'))
            {if(Mark[3]==0){n+='3';Mark[3]=1;Mark[2]=0;Mark[1]=0;Mark[4]=0;Mark[5]=0;Mark[6]=0;}
            continue;}
            else if((N[i]=='L'))
            {if(Mark[4]==0){n+='4';Mark[4]=1;Mark[2]=0;Mark[3]=0;Mark[1]=0;Mark[5]=0;Mark[6]=0;}continue;}
           else if((N[i]=='M'||N[i]=='N'))
                    {if(Mark[5]==0){
                       n+='5'; Mark[5]=1;Mark[2]=0;Mark[3]=0;Mark[4]=0;Mark[1]=0;Mark[6]=0;}
                       continue;
                    }
           else if((N[i]=='R'))
            {if(Mark[6]==0){n+='6';Mark[6]=1;Mark[2]=0;Mark[3]=0;Mark[4]=0;Mark[5]=0;Mark[1]=0;}continue;}
           else {
                Mark[1]=0;
                Mark[2]=0;
                Mark[3]=0;
                Mark[4]=0;
                Mark[5]=0;
                Mark[6]=0;

           }
       }
       cout<<n<<endl;

       }
       return 0;
    }
