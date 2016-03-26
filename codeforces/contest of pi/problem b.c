#include<stdio.h>
#include<string.h>
int N[1000002]={0};

int main()
{
    long long int  i;


    long long int n,j=0,d,ans1=0,p=0,ans=0;
    char c;

    scanf("%lld",&n);
    getchar();
    while(j<n)
    {
        scanf("%c%lld",&c,&d);

        if(c=='+')
            {
                 N[d]=1;
                ans++;

            }
        else if(N[d]==1)
              {
                 ans--;
                 N[d]=0;
              }
        else
            ++ans1;

        j++;
    }
  if(ans<ans1)ans=ans1;
    printf("%lld\n",ans);
    return 0;
}
