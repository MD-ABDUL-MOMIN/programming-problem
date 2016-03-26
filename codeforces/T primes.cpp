#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;
int main()
{
   unsigned long int n,N[100001];
   scanf("%lu",&n);
   int sig;
   for(int i=1;i<=n;i++)
   {
       scanf("%lu",&N[i]);
       sig=0;
       if(sqrt(N[i])*sqrt(N[i])==N[i])
       {
           if(N[i]%2!=0||N[i]==4)
           {
               for(int j=3;j<sqrt(N[i]);j+=2)
                if(N[i]%j==0)
                {sig=1;
                break;
                }
           if(sig==0)printf("YES\n");
           else printf("NO\n");
       }
       else printf("NO\n");

       }
       else printf("NO\n");

}


return 0;
}
