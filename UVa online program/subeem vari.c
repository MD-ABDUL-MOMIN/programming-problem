#include<stdio.h>
int main()
{
    int number[10],i=0;
    int T;
    scanf("%d",&T);
    while(T-->0)
    {for(i=0;i<5;i++)
    {
        scanf("%d",&number[i]);
    }
    int max=number[0],min=number[0];
    for(i=1;i<5;i++)
    {
        if(max<number[i])max=number[i];
        if(min>number[i])min=number[i];
    }
    printf("%d %d\n",max,min);
    }
    return 0;

}
