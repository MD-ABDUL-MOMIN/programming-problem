#include<stdio.h>
int main()
{
    int a,b,c,i,j,n,l,k,m=0;
    scanf("%d",&n);
    printf("\n");
    while(n--)
    { if(m!=0)printf("\n");
    m=1;
        scanf("%d",&a);
    scanf("%d",&b);
        for(l=1;l<=b;l++){
                k=a;i=0;j=0;
            for(i=1;i<=(2*a-1);i++)
        {
          if(i<=a)
            for(j=1;j<=i;j++)
            {
                printf("%d",i);
            }
          else {k=k-1;
                for(j=k;j>=1;j--)
            printf("%d",k);

        }
        printf("\n");
    }
    if(l!=b)printf("\n");
    }
    }
    return 0;
}
