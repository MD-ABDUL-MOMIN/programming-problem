#include<stdio.h>
int main()
{
    long long int New,YY,temp,E;
    int DD,MM,day;
    while(scanf("%lld%d%d%lld",&New,&DD,&MM,&YY)==4)
    {temp=YY+1;
    int Q;
        long long int P=0,R=0,Ext=0;
        while((P+365)<=New)
        {
            if(MM<=2){
                if((YY%4==0&&YY%100!=0)||(YY%400==0))
                {
                    R=366;
                }
                else R=365;
            }
            else {if((temp%4==0&&temp%100!=0)||(temp%400==0))
                {
                    R=366;
                }
                else R=365;
            }
            YY=YY+1;
            P=P+R;
            temp+=1;
            Ext=New-R;
        }
        if(New<365)day=New+DD;
    else day=Ext+DD;
    E=YY+1;
        while(1){
        if(MM<=2){if(MM==1||MM==3||MM==5||MM==7||MM==8||MM==10||MM==12)Q=31;
        else if(MM==2){if((YY%4==0&&YY%100!=0)||(YY%400==0))Q=29;
            else Q=28;}
        else Q=30;}
        else{if(MM==1||MM==3||MM==5||MM==7||MM==8||MM==10||MM==12)Q=31;
        else if(MM==2){if((E%4==0&&E%100!=0)||(E%400==0))Q=29;
            else Q=28;}
        else Q=30;}
            if(day>Q)
                {
                        MM=MM+1;day=day-Q;if(MM>12){MM=1;YY+=1;
                }
                }
            else break;    }
    printf("%d %d %lld\n",day,MM,YY);
}
return 0;
}
