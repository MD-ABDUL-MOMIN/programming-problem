#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,ans=0,i=0,j,k=2,remain=0,temp,l=1;
    scanf("%lld",&n);
    temp=n;
    while(n>0)
    {
        j=n%10;
        if(j==7)remain+=l;
        l*=2;
        ++i;
        if(i>1)
        {
            ans+=(k);
            k*=2;
        }
        n=n/10;
    }
    cout<<ans+remain+1<<endl;


    /*Time limit

    //for(j=1;j<i;j++)
        //remain=(remain*10)+4;
        while(remain<temp)
        {
            l=remain;
            int sig=0;
            while(l>0)
            {
                int rem;
                rem=l%10;
                if(rem!=4&&rem!=7){sig=1;
                 break;
                }
                l=l/10;
            }
            if(sig==0){ ++ans;//cout<<remain<<endl;
            }
            ++remain;

        }

        cout<<ans+1<<endl;
        */

        return 0;



}
