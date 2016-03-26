#include<stdio.h>
int main()
{
    int N,e,f,l;
    scanf("%d",&N);
    while(N-->0)
    {
        int total,i=0;
    scanf("%d%d%d",&e,&f,&l);
    total=e+f;
    while(total>0)
    {
        total=total-l;
        ++i;
        if(total>=l)total+=1;
    }
    printf("%d\n",i);
    }
    return 0;
}
