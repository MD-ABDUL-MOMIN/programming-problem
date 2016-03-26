#include<stdio.h>
int main()
{
    int DD,MM,p;
    long  long int EE,F,YY,temp,R=0;
    while(scanf("%lld%d%d%lld",&EE,&DD,&MM,&YY)==4)
    {long long int i=1;
        while(i<=EE)
        {
            if(MM==1||MM==3||MM==5||MM==7||MM==8||MM==10||MM==12)p=31;
               else if(MM==2){if((YY%4==0&&YY%100!=0)||(YY%400==0))p=29;
                            else  p=28;}
               else p=30;
               DD=DD+1;
               if(DD>p){MM=MM+1;DD=1;
               }
               if(MM>12){YY=YY+1;MM=1;}
               ++i;


        }
        printf("%d %d %lld\n",DD,MM,YY);
    }
  return 0;
}
