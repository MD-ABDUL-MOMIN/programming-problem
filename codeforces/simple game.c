#include<stdio.h>
int main()
{
    long long int n,m,result;
    while(scanf("%lld%lld",&n,&m)==2)
    {  if(n==m&&m==1)
    result=1;
    else{  if((n-m-1)>=(m-1))
            result =m+1;
        else result =m-1;
    }
        printf("%lld\n",result);
    }
    return 0;
}
