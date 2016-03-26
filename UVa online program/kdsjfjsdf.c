#include<stdio.h>
int main()
{
int T,M;
while(scanf("%d",&T)==1)
{
    int i=1;
    while(i<=T)
    {
        scanf("%d",&M);
        if(M>=80&&M<=100)
            printf("case %d: A+\n",i);
        else if(M>=75&&M<80)
            printf("case %d: A\n",i);
        else if(M>=70&&M<=74)
            printf("case %d: A-\n",i);
        else if(M>=65&&M<=69)
            printf("case %d: B+\n",i);
        else if(M>=60&&M<=64)
            printf("case %d: B\n",i);
        else if(M>=55&&M<=59)
            printf("case %d: B-\n",i);
        else if(M>=50&&M<=54)
            printf("case %d: C\n",i);
        else if(M>=45&&M<=49)
            printf("case %d: D\n",i);
            else printf("case %d: F\n",i);
            i++;
    }
}
return 0;
}
