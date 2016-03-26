#include<stdio.h>
int main()
{
    int n,max,min,i,m=0,R[1001];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&R[i]);}
       if(n==1)m=0;
       else m=1;
        if(R[0]>R[1]){max=R[0];min=R[1];}
        else if(R[0]==R[1]){max=R[0];min=R[1];m=0;}
            else {max=R[1];min=R[0];}
        for(i=2;i<n;i++)
        {
            if(R[i]>max||R[i]<min){
                if(R[i]>max)max=R[i];
            else min=R[i];
            ++m;}

            }
            printf("%d\n",m);
            return 0;

        }
