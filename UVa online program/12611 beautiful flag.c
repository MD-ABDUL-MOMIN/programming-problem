#include<stdio.h>
int main()
{
    int radius,Case,i=1;
    scanf("%d",&Case);
    while(i<=Case)
    {
        scanf("%d",&radius);
        int length,wide,x,y,a,z;
        length=(radius*100)/20;
        wide=length*60/100;
        printf("Case %d:\n%d %d\n",i,(length*45/100*(-1)),wide/2);
        printf("%d %d\n",length*55/100,wide/2);
        printf("%d %d\n",length*55/100,wide/-2);
        printf("%d %d\n",length*45/-100,wide/-2);
        i++;


    }
    return 0;
}
