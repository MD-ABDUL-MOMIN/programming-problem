#include<stdio.h>

int main()
{
    char N[5];
    int i,j,n,k,temp;
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    scanf("%c",&N[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(N[j]>N[j+1])
            {
                temp=N[j];
                N[j]=N[j+1];
                N[j+1]=temp;
            }
        }
         for(k=0;k<n;k++)printf("%c ",N[k]);
         printf("\n");
    }
    for(i=0;i<n;i++)printf("%c ",N[i]);

    return 0;

}
