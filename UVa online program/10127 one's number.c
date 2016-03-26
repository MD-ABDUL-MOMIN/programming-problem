#include<stdio.h>
int main()
{
    int n,d,N;
    unsigned long long int i;
    while(scanf("%d",&n)==1)
    {d=1;

        i=1;
        N=1;
        while(i)
        {if(i<n)
         {N=N*10+1;
            ++d;}
            i=N%n;
            N=i;
        }
        printf("%d\n",d);
    }
    return 0;
}
