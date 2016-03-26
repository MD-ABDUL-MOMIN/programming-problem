#include<stdio.h>
int main()
{
    long long int a,b;
    while(scanf("%lld%lld",&a,&b)==2&&(a!=0&&b!=0))
    {int carry=0,d=0,e,f;
            while(a>0||b>0)
            {
            carry=(a%10+b%10+carry)/10;
            a=a/10;
            b=b/10;
            if(carry)d+=1;
            }
        if(d==0)printf("No carry operation.\n");
        else {printf("%d ",d);
        if(d>1)printf("carry operations.\n");
        else printf("carry operation.\n");}

        }
    return 0;
}
