#include<stdio.h>
int main()
{
    int R,N,D,i=1;
    while(scanf("%d%d",&R,&N)==2)
    {int temp,T,M,Q;
        if(R==0&&N==0)break;
        else {
            T=R-N;
            M=T/N;
            temp=T%N;
            if(M>26||(temp!=0&&M==26))printf("Case %d: impossible\n",i);
            else if(T<0){Q=0;printf("Case %d: %d\n",i,Q);}
                else if(temp==0&&M<=26)printf("Case %d: %d\n",i,M);
                else {M=(T/N)+1;
                printf("Case %d: %d\n",i,M);}

        }
    i++;
}
return 0;
}
