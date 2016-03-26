#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int divisor(long long int m)
{

    if(m==1)return 1;
    for(int j=2;j<=sqrt(m);j++)
    {
        if(m%j==0)
        {

              m=m/j;
            if(j==2||j==3||j==5)
            {   //cout<<j<<' '<<m<<endl;
               j=1;
           }

        }

    }
    if(m==2||m==3||m==5||m==1)return 1;
    else return 0;
}

int main()
{
    long long int n=1500,i=0,k=0,a;
    cin>>a;
 while(i<=a)
 {
       ++k;
        int l=divisor(k);

       i+=l;

    }
      cout<<k-1<<endl;
    return 0;

}
/*
int main()
{
    int i=0,uglynumber=0,j,n;
    scanf("%d",&n);

    for(int i(2),uglynumber(0);;i++)
    {
        if(i%2==0)continue;
        if(i%3==0)continue;
        if(i%5==0)continue;
           uglynumber++;
        if(uglynumber==n-1){break;}

    }
    cout<<i<<endl;
    return 0;
}
*/
