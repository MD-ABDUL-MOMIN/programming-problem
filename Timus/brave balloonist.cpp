#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int ch[10000];
void divisor(long long int N);
int main()
{

    long long int D=1;
   long long int n,i=1,j,M=1,p;
    for(j=1;j<=10000;j++)
        ch[j]=0;
    while(i<=10){
            cin>>n;
       divisor(n);
       i++;
    }

 for(i=2;i<=10000;i++)
 if(ch[i]>0){++ch[i];
 M*=ch[i];
 }
 cout<<M<<endl;

        return 0;
}
void divisor(long long int N)
{ long long k;
   double d=sqrt((double)N);
    for(k=2;k<=d;k++)
    {
        if(N%k==0)
        {
            ch[k]++;
            N=N/k;
            return divisor(N);
        }
    }
    ++ch[N];
}


