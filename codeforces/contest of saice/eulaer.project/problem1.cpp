#include<bits/stdc++.h>

using namespace std;
int number[1001];
int main()
{

long long int m,n=2,max=0;
cin>>m;
while(m!=1)
{
    if(m%n==0){m=m/n;
    max<n?max=n:max;
    n=2;
    }

    if(n==m)break;
    ++n;
}
cout<<max<<endl;


/*
    long long int m=4000000,i=2,sum=0,c,b=1;
    //scanf("%lld",&m);

    while(i<=m)
    {  if(i%2==0)sum+=i;
        c=i+b;
        b=i;
        i=c;







    }
    cout<<sum<<endl;
    */
    /*int i,j=1,sum=0,n;
    scanf("%d",&n);


    for(i=3;i*j<n;j++){number[i*j]=1;sum+=i*j;}
    cout<<sum<<endl;
    j=1;
    for(i=5;i*j<n;j++)
    {
        if(number[i*j]!=1)
            sum+=i*j;
    }

    cout<<sum<<endl;
    */
    return 0;
}
