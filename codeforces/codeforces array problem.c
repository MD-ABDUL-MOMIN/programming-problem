#include<stdio.h>
int main()
{
    long long int Na,Nb,i,j,a,b,Arr[100002],Arr1[100002];
    scanf("%lld%lld",&Na,&Nb);
    scanf("%lld%lld",&a,&b);
    for(i=0;i<Na;i++)
    scanf("%lld",&Arr[i]);
        for(i=0;i<Nb;i++)
            scanf("%lld",&Arr1[i]);
        if(Arr[a-1]<Arr1[Nb-b])
            printf("YES\n");
        else printf("NO\n");
        return 0;

    }


