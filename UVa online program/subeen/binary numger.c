#include<stdio.h>
#include<math.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T-->0)
    { int n,num,N,temp;
        scanf("%d",&n);
        if(n==1){printf("0\n1\n");}
        else {
        num=pow(2,n-1);
        N=pow(2,n);
        while(num<N)
        { temp=num;
            int rem=0,i=0,prime[15],k=0;
            while(temp>0)
            {
                rem=temp%2;
                temp/=2;
                prime[i]=rem;
                i++;
            }
            for(k=i-1;k>=0;k--)
                printf("%d",prime[k]);
            printf("\n");
            num++;
        }
        }
    }
    return 0;
}
