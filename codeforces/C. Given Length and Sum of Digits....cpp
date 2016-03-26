#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    int M[101]={0},N[101]={0};
    int n,s,i=0;
    scanf("%d%d",&n,&s);
    if(ceil(s/(n*1.00))>9||s==0)
    {
        int d=-1;
        if(n==1&&s==0)d=0;
        printf("%d %d\n",d,d);
    }
    else{
        int sig=0;
    while(s>0)
    {
        if(s>9)
        M[i]=9,s=s-9;
        else {M[i]=s;s=0;}
        N[i]=M[i];
         i++;
    }
          int si=2;
           for(int i=n-1;i>=0;i--){

           if(i==(n-1)&&M[i]==0){M[i]=1;si=1;}
        if((si==1&&M[i]>0)&&(i!=(n-1))){
               --M[i]; si=0;


          }
            printf("%d",M[i]);

           }
        printf(" ");

      for(int i=0;i<n;i++)
        printf("%d",N[i]);

    }


    return 0;
}
