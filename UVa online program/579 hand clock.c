#include<stdio.h>
int main()
{
    int H,M;
    char ch;
    while(scanf("%d%c%d",&H,&ch,&M)&&(H!=0))
    {
        float temp,temp1,result;
        temp=0.5*((H*60)+M);
        temp1=M*6;
        if(temp>temp1)result=temp-temp1;
        else result=temp1-temp;
        if(result>180)result=360-result;
        printf("%.3f\n",result);

    }
    return 0;
}
