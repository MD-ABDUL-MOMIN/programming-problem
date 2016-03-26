#include<stdio.h>
int main()
{
    int big_number,n,N[100000],i,j,k,c[100000]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&N[i]);  if(i==0){k=N[i];big_number=N[i];}
        if(big_number<N[i])big_number=N[i];

        if(k>N[i])k=N[i];

    }
    //printf("%d %d \n",big_number,k);
    for(i=k;i<=big_number;i++)
    {
        for(j=0;j<n;j++)
        {if(i==N[j])++c[i];
    }
}
//for(i=k;i<=big_number;i++)printf("%d ",c[i]);
//printf("\n");
for(i=big_number;i>=k;i--)
{
    if(c[i]>0){
        for(j=1;j<=c[i];j++){
        printf("%d ",i);
        }
}
}
return 0;
}
