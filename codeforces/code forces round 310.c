#include<stdio.h>
#include<string.h>
int main()
{
    long long int n,d,i,j,k=0,l=0;
    scanf("%lld",&n);
    char ch[n+1];
    getchar();
    gets(ch);
    for(j=0;j<n;)
        {

            if((ch[j]^ch[j+1])==1){i=j;k=i+2;
                    while(k<n)
                    {
                        ch[i++]=ch[k++];
                    }
                    n=n-2;
                   --j;
               }
               else j++;

            }
            if(n<0)n=n*-1;
    printf("%lld\n",n);
    return 0;
}
