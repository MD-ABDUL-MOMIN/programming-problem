#include<stdio.h>
int main()
{
    int c1,c2,c3,c4,c5,sum,c=-1;
    scanf("%d%d%d%d%d",&c1,&c2,&c3,&c4,&c5);
    sum=c1+c2+c3+c4+c5;
    if(sum%5==0&&(sum/5!=0))
        printf("%d\n",sum/5);
    else printf("%d\n",c);
    return 0;
}
