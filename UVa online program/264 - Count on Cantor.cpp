#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    long long int n,term,value,ans,i,j,m;
    while(scanf("%lld",&n)==1)
    {
        long long int sum=1,M;
        M=n;

i=1;
   while((sum+i)<n){
          ++i;
        sum+=i;

}
j=n-sum;

   if(j==0)
        {
            if(i%2==0){
                m=i;
                n=1;
            }
            else {
                m=1;
                n=i;
            }
        }
        else {
            if((i+1)%2==0)
            {
                m=(j);
                n=(i+1)-j+1;

            }
            else {
                m=(i+1)-j+1;
                n=j;
            }
        }
        cout<<"TERM "<<M<<" IS "<<m<<'/'<<n<<endl;
    }
    return 0;
}

