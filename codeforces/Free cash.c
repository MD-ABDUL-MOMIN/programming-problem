#include<stdio.h>
int main()
{
    int H[100001],M[100001],i,j,n,T,R,m=1,mark[256][256],p=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&H[i],&M[i]);
        mark[H[i]][M[i]]++;
        if(p<mark[H[i]][M[i]])p=mark[H[i]][M[i]];
    }
    printf("%d\n",p);

        return 0;

}
