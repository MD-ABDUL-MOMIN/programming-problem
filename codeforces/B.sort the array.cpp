#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    long long int N[100003],M[100003],i,j,n;
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&N[i]);
        M[i]=N[i];}
        sort(M,M+n);
        //for(i=0;i<n;i++)printf("%lld ",M[i]);
        long long int k=0,p=0,q=n-1;
           while(N[p]<N[p+1]&&p<=q)++p;
            while(N[q]>N[q-1]&&p<=q)--q;
       //while(p<=q){


       // }
       long long int c=1,d=1,f=0;
       while(p<=q)
       {
          //if(N[p]>N[q])
         // {
              if(c==1&&d==1)c=p+1,d=q+1;
              //cout<<N[p]<<' '<<N[q]<<endl;
              int tem=N[q];
              N[q]=N[p];
              N[p]=tem;
             // f=f*2;

          //}
        //  else f=1;
          ++p;
          --q;
       }
       int check=0;
       for(i=0;i<n;i++){if(M[i]!=N[i]){check=1;break;}};
       if(check==0&&f<=1)printf("yes\n%lld %lld\n",c,d);
       else printf("no\n");

        return 0;

}
