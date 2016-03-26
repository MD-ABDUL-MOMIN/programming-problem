#include<stdio.h>
int main()
{
    int T,i=1;
    scanf("%d",&T);
    while(i<=T)
    {
        int x1,y1,x2,y2,x3,y3,x4,y4;
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        scanf("%d%d%d%d",&x3,&y3,&x4,&y4);
        if((x1>=x3&&x1<=x4)&&((y1=>y3&&y1<=y4)||y2>y3&&y2<y4))
            printf("Case %d: Yes\n",i);
        else if((x2>x3&&x2<x4)&&((y2>y3&&y2<y4)||(y1>y3&&y1<y4)))
            printf("Case %d: Yes\n",i);
        else printf("Case %d: No\n",i);
        i++;
    }
            return 0;
}
