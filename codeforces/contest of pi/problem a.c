#include<stdio.h>
#include<string.h>
#include<math.h>
long long int N[100001];
int main()
{
    long long int n,i,j;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&N[i]);
    }
     long long int min,max;

        for(i=0;i<n;i++)
    {
        //int d;
        if(i==0)
            {min=N[i+1]-N[0];

              max=N[n-1]-N[0];
            }
            else if(i!=(n-1)&&i!=0)
                {
                if((N[i]-N[0])>(N[n-1]-N[i]))
                    max=N[i]-N[0];
                else max=N[i]-N[n-1];
                if((N[i]-N[i-1])>(N[i+1]-N[i]))
                    min=N[i+1]-N[i];
                else min=N[i-1]-N[i];
            }
            else {
                    min=N[i]-N[i-1];
                max=N[i]-N[0];
            }
            if(min<0)min=min*-1;
            if(max<0)max=max*(-1);
    printf("%lld %lld\n",(min),(max));
    }

return 0;
}
