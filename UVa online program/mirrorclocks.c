#include<stdio.h>
int main()
{
    int T,i=1;
    scanf("%d\n",&T);
    while(i<=T)
    { int a,b;
    char f;
    int time=0,temp=0,hour=0,min=0,clock,d,c;
        scanf("%d%c%d",&a,&f,&b);
        time=a*60+b;
        if(a>6&&a<11){clock=720-time;}
        else if((a==11&&b>0)||a==12){clock=720-time+720;}
        else {clock=720-time;}
        hour=clock/60;
        min=clock%60;
        printf("%02d%c%02d\n",hour,f,min);
        i++;
    }
    return 0;
}
