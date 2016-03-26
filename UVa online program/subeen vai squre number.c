#include<stdio.h>
long long int is_prime(int n);
int main()
{ int T;
int num[15],i,sum=0,root,n;
while(scanf("%d",&n)==1){
        for(i=0;i<n;i++)
            scanf("%d",&num[i]);
        for(i=0;i<n;i++)
        {int p=0,j;
        if(num[i]==1)p=1;
   if(num[i]==2){p=1;}
   else if(num[i]%2==0){p=0;}
    else if(num[i]%3==0)p=0;
    else{root=sqrt(num[i]);
    if(root<3)p=1;
    else{
            for(j=3;j<=root;j+=2)
        {if(num[i]%j==0){p=0;break;}
        else {p=1;}
        }
        }
    }
        sum+=p;
        }
        printf("%d\n",sum);
}
    return 0;
}
