#include<bits/stdc++.h>
//unsolved
using namespace std;

int main()
{
    int N,i,D[103],l=0;
    while(scanf("%d",&N)==1)
    {++l;
        int sig=1;
        int Mark[100002]={0};
        for(i=1;i<=N;i++){
        scanf("%d",&D[i]);
        if(D[i]<=0)sig=0;
        if(i!=1)
            if(D[i]<=D[i-1])sig=0;
       Mark[D[i]]=1;}
       if(sig!=0)
       for(i=1;i<=N;i++)
       {
           for(int j=i;j<=N;j++)
           {
               long long int d;
               d=D[i]+D[j];
               if(Mark[d]!=1)
               {
                   Mark[d]=1;
               }
               else {
                sig=0;break;
               }
           }
       }

            if(sig==1)
            printf("Case #%d: It is a B2-Sequence.\n\n",l);
            else printf("Case #%d: It is not a B2-Sequence.\n\n",l);
    }
    return 0;
}
