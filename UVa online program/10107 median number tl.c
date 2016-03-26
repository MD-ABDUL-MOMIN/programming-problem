#include<stdio.h>
int main()
{
    int N=1,i,j,k;
    long long int a[100090],ans,n,temp;
    while(scanf("%lld",&n)==1&&N<10000)
    {
     a[N]=n;
        j=N;

          while(a[j]<a[j-1]&&j>1)
            {
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
                --j;
            }
            k=N/2;

        if(N%2==0)ans=(a[k]+a[k+1])/2;
            else ans=a[k+1];



        printf("%lld\n",ans);
        ++N;
        }

    return 0;
}
