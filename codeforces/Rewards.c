#include<stdio.h>
int main()
{
    int a1,a2,a3,b1,b2,b3,n,cup,medel,M,N;
    scanf("%d%d%d",&a1,&a2,&a3);
    scanf("%d%d%d",&b1,&b2,&b3);
    scanf("%d",&n);
    cup=a1+a2+a3;
    medel=b1+b2+b3;
    if(cup%5==0)N=cup/5;
    else N=cup/5+1;
    if(medel%10==0)M=medel/10;
    else M=medel/10+1;
    if((N+M)<=n)printf("YES\n");
        else printf("NO\n");
    return 0;

}
