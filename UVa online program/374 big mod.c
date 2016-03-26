#include<stdio.h>
#include<math.h>
long long Reminder(unsigned long int a,unsigned long int b,unsigned long int c);
int main()
{
    unsigned long int B,P,M,REM,i,sum=0;
    while(scanf("%lu%lu%lu",&B,&P,&M)==3)
    { sum=Reminder(B,P,M);
        printf("%lu\n",sum);
    }
    return 0;
}
long long Reminder(unsigned long int a,unsigned long int b,unsigned long int c)
{ long long int D;
    if(b==0)return 1;
    if(b%2==1)return (a*Reminder(a,b-1,c))%c;
    else D=Reminder(a,(b/2),c);
    return (D*D)%c;
}
