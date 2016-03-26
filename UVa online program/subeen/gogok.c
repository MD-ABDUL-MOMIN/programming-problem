#include<stdio.h>
#include<math.h>
int main()
{
    unsigned int number,sum;
    while(scanf("%u",&number)==1&&number>=2)
    { unsigned int p=2,i,j,sum=0,temp,B;
       temp=number;
       printf("%u %c ",temp,'=');
        while(p<=number)
        { i=0;
            if(number%p==0)
            {
                number=number/p;++i;
                while(number%p==0){++i;number=number/p;}
            }
            if(i!=0){
                    sum=sum*pow(p,i);
            if(number>=2)
                    printf("%u%c%u %c ",p,'^',i,'*');
            else printf("%u%c%u",p,'^',i);

            }
       p++;
        }
        printf("\n");
    }
    return 0;
}
