#include<stdio.h>
#include<string.h>
int main()
{
    int n,t,i,j;
    char child[51];
    scanf("%d%d",&n,&t);

    scanf("%s",child);
        int l;
    for(i=1;i<=t;i++)
    {
        for(j=0;j<=n-2;j++)
        {
            if(child[j]=='B'&&child[j+1]=='G')
            {
               l=child[j];
               child[j]=child[j+1];
           child[j+1]=l;
           ++j;
            }
        }
    }
    printf("%s\n",child);
    return 0;
}
