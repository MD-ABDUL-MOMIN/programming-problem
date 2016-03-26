#include<stdio.h>
#include<math.h>
int decimal_to_binary(unsigned int P);
int main()
{ unsigned int M,sum,temp;
    int N,b1,b2,rem;
   scanf("%d",&N);
   while(N-->0){
scanf("%d",&M);
b1=0,b2=0;
  sum=0;
  int l=0,k;
  temp=M;
    while(M!=0)
    {
        rem=M%10;
        k=pow(16,l);
        sum=sum+(k*rem);
        l++;
        M=M/10;
    }
    b1=decimal_to_binary(temp);
    b2=decimal_to_binary(sum);
    printf("%d %d\n",b1,b2);
   }
return 0;
}
int decimal_to_binary(unsigned int P)
{ int m,n=0,x=0;
    while(P!=0)
    {
        x=P%2;
        if(x==1)++n;
        P=P/2;
    }
    return n;
}
