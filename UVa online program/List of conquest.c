#include<stdio.h>
#include<stdio.h>
int main()
{
    int N,i,j,k,d[];
    char ch[2002][76];
    scanf("%d",&N);
    getchar();
    for(i=0;i<N;i++)
        for(j=0;(ch[i][j]=getchar())!='\n';j++);
    for(i=1;i<N;i++)
    {
        for(j=0;ch[i][j]!=' ';j++);
        if(strcmp(ch[i-1][j],ch[i][j])==0)

    }
    return 0;

}
