
#include<stdio.h>

int main()
{
    int n,m,i,j,k,num[256]={0};
    scanf("%d%d",&m,&n);
    char first[n+1][m+1];
    for(i=0;i<n;i++)
    {
    scanf("%s",first[i]);
    }
  int sum=0;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<m-1;j++)
        {
            if(first[i][j]=='f'||first[i][j]=='a'||first[i][j]=='c'||first[i][j]=='e')
            {
                for(k=j;k<=j+1;k++)
             {
                 ++num[first[i][k]];
                 ++num[first[i+1][k]];
             }
             if(num['f']>0&&num['a']>0&&num['c']>0&&num['e']>0)++sum;
             num['f']=0;num['a']=0;num['c']=0;num['e']=0;

             }
            }
    }
    printf("%d\n",sum);
    return 0;

}
