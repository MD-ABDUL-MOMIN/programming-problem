#include<stdio.h>
#include<math.h>
int main()
{
    int n,X0[1001],Y0[10001],x,y,i,j,k,l,m=0,M=0,R=0,r=0;
    scanf("%d%d%d",&n,&x,&y);
    for(i=0;i<n;i++){
        scanf("%d%d",&X0[i],&Y0[i]);
        if((X0[i]<0&&x<0)||(X0[i]>0&&x>0))k=abs(X0[i])-abs(x);
        if((Y0[i]>0&&y>0)||(X0[i]<0&&y<0))l=abs(Y0[i])-abs(y);


       }
       else k=X0[i]+
       if(k==0&&l!=0){m=1;}
       else if(k!=0&&l==0){M=1;}
       else if(k==l){R=1;}
       else ++r;
    }
    printf("%d\n",r+M+R+m);
        return 0;
}
