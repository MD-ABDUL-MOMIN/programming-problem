#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,t,cno=0;
    scanf("%d",&t);
    while(t--){
        int w,l,lw,rw;
        scanf("%d",&r);
        w=r*5;
        l=r*3;
        lw=(45*w)/100;
        rw=(55*w)/100;
        printf("Case %d:\n",++cno);
        printf("%d %d\n",-lw,l/2);
        printf("%d %d\n",rw,l/2);
        printf("%d %d\n",lw,-(l/2));
        printf("%d %d\n",-lw,-(l/2));
    }
}
