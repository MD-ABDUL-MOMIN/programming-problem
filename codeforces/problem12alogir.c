#include<stdio.h>
int main()
{
    int n,m,i,j,marks,total;
    printf("How many students:");
    scanf("%d",&n);
    printf("How many subjects:");
    scanf("%d",&m);
    int sum[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the marks of number student%d:",i+1);
        total=0;
        for(j=1;j<=m;j++){
        scanf("%d",&marks);
        total+=marks;
    }
    sum[i]=total;
    }
    for(i=1;i<=n;i++)
    printf("%d %d\n",i,sum[i-1]);
    return 0;
}
