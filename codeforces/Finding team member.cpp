#include<cstdio>

int person[1000000][2],S[10001];
bool used[1000000];

int main()
{
    int n,x;
    scanf("%d",&n);
    n*=2;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i;j++)
        {
            scanf("%d",&x);
            person[x][0]=i;
            person[x][1]=j;
        }
    }
    used[0]=1;

    for(int i=1000000;i>0;i--)
    {
        if(!used[person[i][0]]&&!used[person[i][1]])
        {
          used[person[i][0]]=1;
          used[person[i][1]]=1;

            S[person[i][0]]=person[i][1];
           S[person[i][1]]=person[i][0];
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(i>1)printf(" ");
        printf("%d",S[i]);
    }
    return 0;
}
