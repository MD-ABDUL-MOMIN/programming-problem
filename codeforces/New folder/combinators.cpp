#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)return a;
    gcd(b,a%b);
}
int main()
{
    int n,r,N[10001],down[10000];
     printf("Enter the value of n and r : ");
     cin>>n>>r;
     for(int i=n;i>r;i--)
        N[i]=i;

        //for(int i=n;i>r;i--)
          //  printf("%6d",N[i]);
        //N[i]=i;
        printf("\n");
        for(int i=n-r;i>=1;i--){
        down[i]=i;
       // printf("%6d",down[i]);
        }
        //printf("\nTheresult\n");
    for(int i=n-r;i>=1;i--)
     {
         for(int j=n;j>r;j--)
         {
             int temp=gcd(N[j],down[i]);
             N[j]=N[j]/temp;
           down[i]=down[i]/temp;

         }
         /*printf("DOWN ");
         for(int k=n-r;k>=1;k--)
            printf("%6d",down[k]);
            printf("\n");
            printf("UP ");
         for(int k=n;k>r;k--)
            printf("%6d",N[k]);
            printf("\n");
            */

     }
     long double ans=1;
    for(int i=n;i>r;i--)
     {
         ans*=N[i];
     }
cout<<"the Result of nCr is "<<ans<<endl;
     return 0;

}

