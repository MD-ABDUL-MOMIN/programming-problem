#include<stdio.h>
#include<string.h>
int N[1000002];

int main()
{
    long long int  i;
for(i=0;i<1000001;i++)N[i]=0;

    long long int n,j=0,d,ans1=0,p=0,ans=0;
    char c;

    scanf("%lld",&n);
    getchar();
    while(j<n)
    {
        scanf("%c%lld",&c,&d);
        getchar();
        if(j==1&&c=='+')p=0;
        if(j==1&&c=='-')p=1;
        if(c=='+'&&N[d]==0)
            {

                  if(p==0) ++ans;
                   N[d]=1;


            }
        else if(c=='-'&&N[d]==0)
              {
                  ++ans1;

              }
        else if(c=='-'&&N[d]==1)
        {--ans;
        }


        j++;
    }

    printf("%lld\n",max(ans,ans1));
    return 0;
}

