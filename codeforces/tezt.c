#include<stdio.h>
int main()
{
    long long int min[4],max[4],n,i,sum=0,j,e;
    scanf("%lld",&n);
    for(i=0;i<3;i++){
        scanf("%lld%lld",&min[i],&max[i]);
        sum+=min[i];}
        e=n-sum;
        for(i=0;i<3;i++){sum=0;
    if(e>0&&e<(max[i]-min[i]))
    {
        min[i]=(e)+min[i];
    }
    else if(e>0&&e>=(max[i]-min[i]))min[i]=max[i];
    for(j=0;j<3;j++) {sum+=min[j];}
    e=n-sum;
        }
        for(i=0;i<3;i++)printf("%lld ",min[i]);
        return 0;

}
