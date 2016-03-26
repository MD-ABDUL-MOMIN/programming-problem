#include<stdio.h>
int main()
{
    int N,i,j,a[1000];
    while(scanf("%d",&N)==1&&N<=1000)
    {
       int M=0,temp;
       for(i=0;i<N;i++)
            scanf("%d",&a[i]);
        for(i=1;i<N;i++)
        {
            for(j=N-1;j>=i;j--)
            {
                if(a[j-1]>a[j])
                {
                   temp=a[j-1];
                   a[j-1]=a[j];
                   a[j]=temp;
                   ++M;
                }
            }
        }

        printf("Minimum exchange operations : %d\n",M);
    }
    return 0;
}
