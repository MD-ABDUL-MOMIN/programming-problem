#include<stdio.h>
int main()
{
    int i,k,l,M,N;
    while(scanf("%d",&i)==1&&i!=0)
    {
        scanf("%d%d",&M,&N);
        int j=0;
        while(j<i)
        { int x,y,p,Q;
            scanf("%d%d",&x,&y);
            p=x-M;
            Q=y-N;
            if(p==0||Q==0)printf("divisa\n");
            else if(p>0&&Q>0)printf("NE\n");
            else if(p<0&&Q>0)printf("NO\n");
            else if(p<0&&Q<0)printf("SO\n");
            else printf("SE\n");
            j++;
        }
    }
    return 0;
}
