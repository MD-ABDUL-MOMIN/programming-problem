#include<stdio.h>
#include<math.h>
int prime(int N);
int main()
{
    int T;
    scanf("%d",&T);
    while(T-->0)
    {int sum=0;
        int A[15],i,j;
        for(i=0;i<10;i++)
            scanf("%d",&A[i]);
        for(i=0;i<10;i++)
        {
           sum+=prime(A[i]);
        }
        printf("%d\n",sum);
    }
    return 0;
}
int prime(int N)
{ int L,sum=0,i;
    if(N<=1){sum=0;}
    else if(N==2||N==3){sum=1;}
    else {L=sqrt(N);
        for(i=2;i<=L;i++)
        {
            if(N%i==0){sum=0;break;}
            else {sum=1;}
        }

    }
return sum;
}


