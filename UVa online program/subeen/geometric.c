#include<stdio.h>
int main()
{
    int T,i=1;
    scanf("%d",&T);
    while(i<=T)
    {
        int n1,n2,n3,a,b,c=0,d=0,e=0,f=0,g=0;
        scanf("%d%d%d",&n1,&n2,&n3);
        if(n1==0&&n2==0&&n3==0)printf("Case %d: None\n",i);
        else{a=n2-n1;
        b=n3-n2;
        if(n1!=0&&n2%n1==0)c=n2/n1;
        if(n2!=0&&n3%n2==0)d=n3/n2;
        if(a==b&&c==d&&c!=0)printf("Case %d: Both\n",i);
        else if(a==b)printf("Case %d: Arithmetic Progression\n",i);
        else if(c==d&&c!=0)printf("Case %d: Geometric Progression\n",i);
        else printf("Case %d: None\n",i);
        }
        ++i;
    }
    return 0;
}
