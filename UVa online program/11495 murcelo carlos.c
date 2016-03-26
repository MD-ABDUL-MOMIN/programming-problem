#include<stdio.h>
int main()
{
    long int N,i,j,a[100000];
    while(scanf("%ld",&N)==1&N!=0)
    {
       long int M=0,temp;
       for(i=0;i<N;i++)
            scanf("%ld",&a[i]);
        for(i=0;i<N;i++)
        {
            for(j=N-1;j>i;j--)
            {
                if(a[i]>a[j])
                { temp=a[i];
                   a[i]=a[j];
                   a[j]=temp;
                   ++M;
                }        }
        }
        if(M%2==0)printf("Carlos\n");
        else printf("Marcelo\n");
    }
    return 0;
}
