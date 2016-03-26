#include<stdio.h>
int main()
{
    int N,n[101],i,j,key;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&n[i]);

    }
    for(i=1;i<N;i++)
    {
        key=n[i];
        j=i-1;
        while(j>=0&&n[j]>key)
        {
            n[j+1]=n[j];
            j=j-1;
         n[j+1]=key;
        }
    }
    for(i=0;i<N;i++)
        printf("%d ",n[i]);
        printf("\n");
    return 0;
}
