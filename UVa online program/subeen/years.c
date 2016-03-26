#include<stdio.h>
int main()
{
    int DD,MM,YY,T,D,M,Y,N,MO;
    scanf("%d%d%d",&YY,&MM,&DD);
    scanf("%d",&T);
    while(T-->0)
    {
        scanf("%d%d%d",&Y,&M,&D);
        N=Y+1;
        MO=Y;
        long long int sum=0,P;
        while(Y<YY)
        {
           if(M<=11){ if(Y%400==0&&Y%100==0)P=366;
           else if(Y%4==0)P=366;
           else P=365;}
        else {
            if((N%400==0&&N%100==0)||(N%4==0))P=366;
            else P=365;
            }
        Y++;N++;
        sum+=P;
    }
    long long int day,day1;
    if(M<=5)day=M*31+D;
    else {
    if((MO%400==0&&MO%100==0)||(MO%4==0))
      {if(M>11)
    day=(5*31+(M-5)*30)+1+D;
    else day=(5*31+(M-5)*30)+D;
      }
      }
      sum=sum-day;
    if(MM>11&&((YY%400==0&&YY%100)||(YY%4==0)))
        day1=(5*31)+(MM-5)*30+1+DD;
       else  day1=(5*31)+(MM-5)*30+DD;
    sum+=day1;
    printf("%lld\n",sum);
    }
    return 0;
}
