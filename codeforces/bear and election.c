#include<stdio.h>
#include<math.h>
int C[10000];
int main()
{
    int n,N[101],i,j,p=0,sum=0,ans=0,signal=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&N[i]);
        if(i==0)p=N[i];
        if(p<=N[i]&&i!=0){
            p=N[i];
            ++C[p];
            signal=1;
        }
    }

 //printf("%d",C[p]);
 if(signal!=0)
       {
           sum=p*C[p]+N[0];
        ++C[p];
        int rem;
        rem=sum%C[p];
        if(rem==0)
            ans=sum/C[p]+1;
        else if(rem==1)ans=sum/C[p]+1;
        else ans=sum/C[p]+rem;
        ans-=N[0];
       }
else ans=0;
    printf("%d\n",ans);
    return 0;

}
