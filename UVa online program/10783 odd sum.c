#include<stdio.h>
int main()
{   int a,b,i,n;
    int sum,j=1;
    scanf("%d",&n);
    while(j<=n){sum=0;
        scanf("%d%d",&a,&b);
        if(a%2==0)a=a+1;
        else a;
        for(i=a;i<=b;i+=2)
        {
        sum+=i;}
        printf("Case %d: %d\n",j,sum);
        j++;
}
return 0;
}
