#include<stdio.h>
int main()
{
    int N,n,i,j,L,temp;
    scanf("%d",&N);
    while(N>=1)
    {
        scanf("%d",&n);
        int a[n];L=0;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                    ++L;
                }

            }
        }
        printf("Optimal train swapping takes %d swaps.\n",L);
        N--;   }
    return 0;
}
