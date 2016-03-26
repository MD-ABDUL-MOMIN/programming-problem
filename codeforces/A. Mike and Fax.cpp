#include<bits/stdc++.h>
#include<string>
using namespace std;
int check(string ch,int a,int l)
{
    int p=0,r,t;
    t=l;
    r=a;
   // if(a==l)return 1;
    while(r<=t)
        {
        if(ch[r]!=ch[t])
        return 0;

       else p=1;
    ++r;
    --t;
    }
    return p;
}
int main()
{
    string ch;
    int D[257]={0};
    cin>>ch;
    int n,M=0,N=0;
    scanf("%d",&n);
    int l=ch.size();

    if(l%n==0)
    {
        int d=l/n,m;
        int p=0,q=1;
        m=d;
        while(d<=l)
        {

         if(check(ch,p,d-1)!=1){q=0;break;}

            p=d;
            d=p+(m);
        }
        if(q==1)printf("YES\n");
        else printf("NO\n");

    }
    else printf("NO\n");
    return 0;
}

    /*
    for(int i=0;i<l;i++)
        ++D[ch[i]];
    for(int i='a';i<='z';i++){

       if(D[i]%2==1&&D[i]>0)++M;
    }
    if((M<=n&&l%n==0&&(M+M*2)<=l)||(((l/n)==1||M==0)&&(l%n==0)))
        printf("YES\n");

   else  printf("NO\n");


    return 0;

}
*/
