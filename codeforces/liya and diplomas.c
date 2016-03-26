#include<stdio.h>
int main()
{
    long long int n,i,sum=0;
    long long int min[4],max[4],mid[4];
    scanf("%lld",&n);
    for(i=0;i<3;i++)
        scanf("%lld%lld",&min[i],&max[i]);
    for(i=0;i<3;i++)
      {sum+=min[i];++min[i];
    }

    printf("%lld",sum);
    for(i=0;i<3;i++){
     while(sum<n)
     {   while(min[i]<=max[i]){
               sum+=min[i];
             if(min[i]<max[i])
            min[i]++;
         else min[i];}
     }

    }
     for(i=0;i<3;i++)
        printf("%lld ",min[i]);
    return 0;

}
