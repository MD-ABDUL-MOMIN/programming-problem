#include<bits/stdc++.h>
#include<math.h>
using namespace std;
double distance(int x,int y,int z,int a)
{
    double D;
    D=sqrt((x-z)*(x-z)+(y-a)*(y-a)*1.00);
    return D;
}
int main()
{
    int T,i=1;
    scanf("%d",&T);
    while(i<=T)
    {

        int n,y,X[101],Y[101],R[101],Lx[11],Ly[11],j;

        scanf("%d%d",&n,&y);
        for(j=0;j<n;j++)
        {
            scanf("%d%d%d",&X[j],&Y[j],&R[j]);
        }
        printf("Case %d:\n",i);
        for(j=0;j<y;j++)
        {
             scanf("%d%d",&Lx[j],&Ly[j]);
             int sig=0;
             for(int k=0;k<n;k++)
             {
                 if(distance(Lx[j],Ly[j],X[k],Y[k])<=R[k]){
                    sig=1;
                    break;
                 }
             }

             if(sig==1)printf("Yes\n");
             else printf("No\n");

        }


    i++;


    }

}
