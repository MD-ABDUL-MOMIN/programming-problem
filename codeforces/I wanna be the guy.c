#include<stdio.h>
int main()
{
    int n,m,p,A[101],B[101],i,R[101],s=0;
    scanf("%d",&n);
    //getchar();
    scanf("%d",&m);
     //getchar();
    for(i=0;i<m;i++)scanf("%d",&A[i]);
    //getchar();
    scanf("%d",&p);
     //getchar();
    for(i=0;i<p;i++)scanf("%d",&B[i]);
    for(i=0;i<101;i++)R[i]=0;
    for(i=0;i<m;i++)R[A[i]]++;
    for(i=0;i<p;i++)R[B[i]]++;
    for(i=1;i<=n;i++)
    {
        if(R[i]>0)continue;
        else {s=1;break;}
    }
    if(s==1)printf("Oh, my keyboard!\n");
    else printf("I become the guy.\n");
    return 0;
}
