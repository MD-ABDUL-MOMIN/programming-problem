#include<stdio.h>
#include<string.h>
int main()
{
    int N,i,j,k=1,K,p;
    char a[3];
    scanf("%d",&N);
    K=N;
    getchar();
    while(N-->0)
    {
      gets(a);
      if(N==(K-1)){p=a[1];
      }
      else {if(p==a[0]){++k;p=a[1];}
      else p=a[1];}
    }
        printf("%d",k);
        return 0;
    }
