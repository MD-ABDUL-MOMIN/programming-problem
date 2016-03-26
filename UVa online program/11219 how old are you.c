#include<stdio.h>
int main()
{
    int T,i=1;
    scanf("%d",&T);
        while(i<=T)
        {
             unsigned int Dc,Mc,Yc,Db,Mb,Yb;
             int YY;
             char a,b,c,d;
             scanf("%u%c%u%c%u",&Dc,&a,&Mc,&b,&Yc);
             scanf("%u%c%u%c%u",&Db,&c,&Mb,&d,&Yb);
             if(Dc<Db){
             Mc=Mc-1;
             }
             if(Mc<Mb){
            Yc=Yc-1;
             }
             YY=Yc-Yb;
             if(YY<0)printf("Case #%d: Invalid birth date\n",i);
             else if(YY<=130)printf("Case #%d: %d\n",i,YY);
             else printf("Case #%d: Check birth date\n",i);
             i++;
        }
    return 0;
}
