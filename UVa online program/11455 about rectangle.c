#include<stdio.h>
int main()
{
    int n,A,b,c,d=1;
    scanf("%d",&n);
   while(n>=1){
        long long int a[4]={0,0,0,0},i,j,temp=0;
            for(i=0;i<4;i++)
                scanf("%lld",&a[i]);
            for(i=0;i<4;i++)
            {
                for(j=0;j<3;j++)
                {
                    if(a[j]>a[j+1])
                    {
                        temp=a[j];a[j]=a[j+1];a[j+1]=temp;
                    }
                }

            }
            if(a[0]==a[1]&&a[1]==a[2]&&a[2]==a[3]){
                printf("square\n");}
            else if(a[0]==a[1]&&a[2]==a[3]){
                printf("rectangle\n");}
            else if(a[3]<=(a[0]+a[1]+a[2]))
                {
                printf("quadrangle\n");}
            else {printf("banana\n");}
        n--;
        }
    return 0;
}
