#include<stdio.h>
int main()
{
    int n,m,P[101],i,j,temp;
    scanf("%d%d",&n,&m);
    for(i=0;i<m;i++)
    scanf("%d",&P[i]);
    for(i=0;i<m;i++)
        for(j=0;j<m-1;j++)
    {
        if(P[j]>P[j+1])
        {
            temp=P[j];
            P[j]=P[j+1];
            P[j+1]=temp;
        }
    }
    temp=P[n-1]-P[0];
    for(i=1;i<=m-n;i++)
    {
        if(temp>(P[i+n-1]-P[i]))
        temp=P[i+n-1]-P[i];

    }
    printf("%d\n",temp);

    return 0;
}
