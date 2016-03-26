#include<stdio.h>//this programm is also applicable for vashya and his socks
int main()
{
    int a,b,i=0,c;
    scanf("%d%d",&a,&b);
    c=a;
    while(a>0)
    {
        a=a-b;
        if(a>=0){a+=1; ++i;}

    }
    printf("%d",i+c);
    return 0;
}
