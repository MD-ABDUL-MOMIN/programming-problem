#include<stdio.h>
#include<math.h>
int main()
{
    int a[102],b[102];
    double r,sum=0,d1,d2,m=0,max=0,test=0;
    int N,j,sig=0;
    while(scanf("%d",&N)==1&&N!=0)
    {
        sig=0;
        int i;
        sum=0;
        m=0;
        test=0;
        for(i=0;i<N;i++)
            scanf("%d%d",&a[i],&b[i]);
            scanf("%lf",&r);
            sum=0;
            r=r*2;
            if(N>=3){

            for(i=0;i<N;i++)
            {
                   if(i==0){
                        d1=pow((a[i]*1.00)-a[N-1],2.00);
                        d2=pow((b[i]*1.00)-b[N-1],2.00);
                   }
                   else{
                      d1=pow((a[i]*1.00)-a[i-1],2.00);
                        d2=pow((b[i]*1.00)-b[i-1],2.00);
                   }
                      test=sqrt(d1+d2);
                      m+=test;
                    if(max<test)max=test;
                for(j=0;j<N;j++){
                        d1=pow((a[i]*1.00)-a[j],2.00);
                d2=pow(b[i]*1.00-b[j],2);
                sum=sqrt(d1+d2);

                if(sum>(r)||r==0){
                    sig=1;
                    break;
                }

                }

            }
            printf("%lf %lf ",m,max);
         m=m-max;
         if((m-max)<=0)sig=1;
            }
            else sig=1;


           if(sig==0)
            printf("The polygon can be packed in the circle.\n");
           else printf("There is no way of packing that polygon.\n");

    }
    return 0;
}
