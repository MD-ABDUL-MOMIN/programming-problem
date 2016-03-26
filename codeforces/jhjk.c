#include<stdio.h>
int main()
{
    int a,b,d;
    scanf("%d%d",&a,&b);
     while(b>1)
    {
        d=a%b;
        if(d==0){b;break;}
        a=b;
          b=d;
    }
    printf("%d",b);
}
