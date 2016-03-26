#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j=1,k;
    char ch[101][101];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&ch[i]);
    }
    for(i=0;i<n-1;i++)
    { for(k=i+1;k<n-1;k++)
        if(strcmp(ch[i],ch[k+1])==0)++j;
    }
    printf("%d",j);
    return 0;
}
