#include<stdio.h>
int main()
{
    int n,t,i,p=0,a[35000];
    unsigned long int d;
    scanf("%d%d",&n,&t);
    for(i=1;i<n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=t;i++)
    {  d=a[i]+i;
        if(d==t){
            p=1;break;}
    }
    if(p==0)printf("NO");
    else printf("YES");
    return 0;
}
