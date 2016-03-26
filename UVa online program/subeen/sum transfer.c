#include<stdio.h>
#include<math.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T-->0)
    {
        long long int num,sum=0,temp=0,rem,arr[100],i=0;
        int j=0;
        scanf("%lld",&num);
        if(num==0)temp=1;
        else if(num==1)temp=0;
        else {while(num>0)
        {
            rem=num%10;
            if(rem%2==0)arr[i]=rem+1;
            else arr[i]=rem-1;
            num=num/10;
            i++;j=i;
        }
        temp=0;
        float M;
        for(i=j-1;i>=0;i--)
             {rem=arr[i];
             M=pow(10,i);
            temp=temp+(rem*M);
             }
        }
        printf("%lld\n",temp);
        }
    return 0;
}
