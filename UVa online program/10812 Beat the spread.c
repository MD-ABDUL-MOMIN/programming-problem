#include<stdio.h>
int main()
{
    int S,D,T;
    scanf("%d",&T);
    while(T-->0)
    {
        int A,B;
        scanf("%d%d",&S,&D);
        if(S>=D)
        {
            A=(S+D)/2;
            B=(S-D)/2;
            if((A+B)!=S)printf("impossible\n");
            else
                printf("%d %d\n",A,B);

        }
        else printf("impossible\n");
    }
    return 0;
}
