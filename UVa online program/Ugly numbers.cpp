#include<iostream>
#include<math.h>
using namespace std;
int cheak[10000];
int isprime(long long int n)
{ long long int i;
    cheak[2]=1;
    cheak[3]=1;
    cheak[5]=1;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {  n=n/i;
            if(cheak[i]==1)return isprime(n);
            else return 0;
        }
    }
    if(cheak[n]==1)return 1;
    else return 0;

}
int main()
{
    unsigned long int i,j,k=1;
    for(i=1;k<=500;i++)
    {
        int d=isprime(i);

        if(i%7==0||(d==0&&(i!=2&&i!=3&&i!=5&&i!=1)))
        {
             cout<<i<<" "<<d<<endl;
            continue;}
        else {++k; cout<<"Desired "<<i<<" "<<d<<endl;}
    }
    cout<<"The 1500'th ugly number is <"<<i-1<<">."<<endl;
    return 0;
}

