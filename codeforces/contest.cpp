#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,t;
    char  ch[101];
    scanf("%d%d",&n,&t);
    for(int i=0;i<n;i++)
        ch[i]='0';
        if(n==1&&t==10)printf("-1\n");
        else {
     if(t==10||t==5||t==2){ch[0]='1'; ch[n]='\0'; if(n==1) cout<<t<<endl;
     else cout<<ch<<endl;}
        else {ch[0]=t+'0';ch[n]='\0';cout<<ch<<endl;}
        }
        return 0;



}
