#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,b,x=0,c;
    scanf("%lld%lld",&a,&b);
    if(a==b)printf("infinity\n");
    else {
        a=a-b;
        for(int i=1;i<=sqrt(a+1);i++)
        {
        if(a%i==0){
                 c=a/i;

                  if(i>b)++x;
                  if(c>b&&i!=c)++x;


            }


         }

        cout<<x<<endl;
}
}
