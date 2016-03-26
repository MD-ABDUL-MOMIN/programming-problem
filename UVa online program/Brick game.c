#include<stdio.h>
int main()
{
    int T,Age[15],i,j,n,k=1;
    scanf("%d",&n);
    while(k<=n){
            scanf("%d",&T);
       for(i=0;i<T;i++)
            scanf("%d",&Age[i]);
            int key;
       for(i=1;i<T;i++)
       {
           key=Age[i];
           j=i-1;
           while(j>=0&&Age[j]>key)
           {
               Age[j+1]=Age[j];
               j=j-1;
               Age[j+1]=key;

           }

       }
       printf("Case %d: %d\n",k,Age[(T-1)/2]);
       k++;
    }
    return 0;
}
