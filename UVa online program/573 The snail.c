#include<stdio.h>
int main()
{
    int H,U,D,F;
    while(scanf("%d%d%d%d",&H,&U,&D,&F)==4&&H!=0)
    {float sum=0,p=0,Q=0;
    int i=0;
    float temp,temp1,slid;
    temp1=U*1.00;
    slid=D*1.00;
    temp=(U*F)/100.00;
    while(1)
    {i++;
    if(temp1>0){
        sum+=temp1;}
        else sum;
        if(sum>H){Q=1;break;}
        sum-=slid;
        if(sum<0){Q=0;break;}
        temp1=temp1-temp;
    }
    if(Q==0)printf("failure on day %d\n",i);
    else printf("success on day %d\n",i);
}
return 0;
}
