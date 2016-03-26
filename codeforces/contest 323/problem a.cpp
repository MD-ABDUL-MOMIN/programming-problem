#include<bits/stdc++.h>

using namespace std;
int Mark[2505],Mark1[2505];
int main()
{
    int n,i,j,H[2504],V[2504];
    scanf("%d",&n);
   for(int i=1;i<=n*n;i++)
       scanf("%d%d",&H[i],&V[i]);
//for(i=1;i<=2503;i++){
    //Mark[i]=0;Mark1[i]=0;

 for(i=1;i<=n*n;i++)
 {
    if(Mark[H[i]]==0&&Mark1[V[i]]==0)
    {
            printf("%d ",i);
            Mark[H[i]]=1;
            Mark1[V[i]]=1;
    }

 }
    return 0;
}
