#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    long long int n;
    while(scanf("%lld",&n)==1)
    {
        long long int term,ans,i,j,m,n;
         double value=2*n;
        term=sqrt(value);
        cout<<term<<endl;
        if(n>=(term*(term+1))/2)
        j=n-(term*(term+1))/2;
        else {j=n-(term*(term-1))/2;}
        cout<<j<<endl;
        if(j==0)
        {
            if(term%2==0){
                m=term-j;
                n=1;
            }
            else {
                m=1;
                n=term-j;
            }
        }
        else {
            if((term+1)%2==0)
            {
                m=(term+1)-j+1;
                n=(j);
            }
            else {
                m=j;
                n=(term+1)-j+1;
            }
        }
        cout<<m<<"/"<<n<<endl;
    }
    return 0;
}


