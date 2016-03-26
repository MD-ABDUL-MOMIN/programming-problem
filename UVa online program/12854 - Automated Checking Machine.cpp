#include<bits/stdc++.h>

int main()
{
    int a1,a2,a3,a4,a5,b2,b1,b3,b4,b5;
    while(scanf("%d%d%d%d%d",&a1,&a2,&a3,&a4,&a5)==5)
    {
        scanf("%d%d%d%d%d",&b1,&b2,&b3,&b4,&b5);
        if(a1==b1||a2==b2||a3==b3||a4==b4||a5==b5)
            printf("N\n");
        else printf("Y\n");
    }
    return 0;
}
