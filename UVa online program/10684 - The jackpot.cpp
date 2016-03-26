#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N,i;
    long long int sum=0,num,max;
    while(scanf("%d",&N)==1&&N!=0)
    {
        sum=0;
        max=0;
        for(i=1;i<=N;i++)
        {
            scanf("%lld",&num);
            if(num<0){
                sum+=num;
                if(sum<0)sum=0;}
            else {
                sum+=num;
            }
            max<=sum?max=sum:max;
        }
        if(max!=0)
        printf("The maximum winning streak is %lld.\n",max);
        else printf("Losing streak.\n");
    }
    return 0;
}
