#include<stdio.h>
int main()
{
    int N,n,rem,sum=0,t,p,temp;
    while(scanf("%d",&n)==1)
    {
        temp=n;
    while(n>=3)
    { n=n-3;
    if(n==2){n+=1;if(n-3==0){sum++;break;}
    else {sum++;n=n+1;}

            }
    }
    printf("%d",temp+sum);
    }
    return 0;
}
