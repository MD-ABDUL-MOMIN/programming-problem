#include<bits/stdc++.h>

using namespace std;
long long int nPr(int n,int r)
{
    long long int sum=1,R=1,m;
    for(int i=r+1;i<=n;i++)sum*=i;
    for(int i=1;i<=(n-r);i++)R*=i;


  m=(sum/R);
  return m;

}
map<int,int>ch;
int main()
{
    string s1,s2;
     int sum=0;
    cin>>s1;
   getchar();
    cin>>s2;

   int l1=s1.size();

    for(int i=0;i<l1;i++)
    {
        if(s1[i]=='+')++sum;
        else --sum;

    }
    int mark=0,p=0,l2=s2.size();
       for(int i=0;i<l2;i++)
    {
        if(s2[i]=='?')++mark;
        else if(s2[i]=='+')++p;
        else --p;
    }
    int k=0,M,total=0;
     double ans;
    while(k<=mark)
    {
        M=k*1+(mark-k)*-1;
        ch[M+p]=nPr(mark,k);
        total+=nPr(mark,k);
        ++k;
    }
    if(mark==0)
        ch[p]=1,total=1;

        ans=ch[sum]/((total)*1.00);

       printf("%.12lf\n",ans);

        return 0;




}
