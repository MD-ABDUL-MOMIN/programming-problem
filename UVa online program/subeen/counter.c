#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T-->0)
    {
        int hh,mm,ss,HH,MM,SS,c;
        scanf("%d%d%d",&hh,&mm,&ss);
        scanf("%d%d%d",&HH,&MM,&SS);
        scanf("%d",&c);
         long long int number_of_tally=0,time=0;
        if(SS>=ss)time=SS-ss;
        else{time=SS-ss+60;MM=MM-1;}
        if(MM>=mm)time=time+(MM-mm)*60;
        else{
            time=time+(MM-mm+60)*60;
            HH=HH-1;
        }
        if(HH>=hh)
        {
            time=time+(HH-hh)*3600;
        }
        else {time=time+(HH-hh+24)*3600;}
        number_of_tally=time*c;
        printf("%lld\n",number_of_tally);

        }
        return 0;
    }
