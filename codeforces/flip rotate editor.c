#include<stdio.h>
int main()
{
    char ch[101][101];
    int i,j,k,w,h,l;
    scanf("%d%d",&w,&h);
    getchar();
    for(i=1;i<=h;i++)
    {
        for(j=1;j<=w;j++)
            scanf("%c",&ch[i][j]);
        }

        for(i=1;i<=w;i++)
        {
            for(l=0;l<2;l++)

           for(k=0;k<2;k++)
            for(j=1;j<=h;j++)
                printf("%c",ch[j][i]);
            printf("\n");
            }


        return 0;

}
