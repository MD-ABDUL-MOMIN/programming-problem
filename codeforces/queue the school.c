#include<stdio.h>
#include<string.h>
int main()
{
    char ch[55],key;
    int N,t,i;
    scanf("%d%d",&N,&t);
    getchar();
    for(i=0;i<N;i++)scanf("%c",&ch[i]);
    while(t-->0)
    {
        for(i=0;i<(N-1);i++)
        {
            if(ch[i]=='B'&&ch[i+1]=='G')
            {

                ch[i]='G';
                ch[i+1]='B';
                i=i+1;
            }
        }
    }
    for(i=0;i<N;i++)printf("%c",ch[i]);
    return 0;
}
