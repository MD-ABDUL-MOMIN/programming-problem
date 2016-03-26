#include<stdio.h>
int BigMod(int a,int b,int M);
int Bigsum(int a,int b,int M);
int main()
{
    int a,b,M,d;
    scanf("%d%d%d",&a,&b,&M);
    d=Bigsum(a,b,M);
    printf("%d",d);
    return 0;

}
int x=0;
int Bigsum(int a,int b,int M)
{

    if(b==0)return x;
    x=((x%M)+(((BigMod(a,b-1,M))*(b)%M))%M)%M;
    return Bigsum(a,b-1,M);
}
int BigMod(int a,int b,int M)
{
    int x;
    if(b==0)return 1%M;
   if(b%2==0){
        x=BigMod(a,b/2,M);
   return ((x%M)*(x%M))%M;

   }
   else return ((a%M)*BigMod(a,b-1,M)%M)%M;
}

