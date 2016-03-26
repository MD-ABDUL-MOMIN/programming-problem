#include<stdio.h>
#include<math.h>
int main()
{
    int number,N,n=0,P=number;
    char a;  double prime;
    scanf("%d%c",&number,&a);
    N=(number/5)+(number/25);
    printf("the number of zero %d\n",N);
    //scanf("%lf",&prime);
int i;
   /* while(P>0)
    {
        P=(number/pow(prime,i));
        n+=(int)P;
        ++i;
    }*/
    printf("the number of that prime number is %d",n);
   double d,f;
    for(f=1;f<=number;f++){
    d+=(log10(f));
    //printf("%lf",log10(f));
    }

    printf("the number of digit of that number is %d",(int)ceil(d));
    return 0;

}
