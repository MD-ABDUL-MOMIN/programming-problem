#include<bits/stdc++.h>
#include<algorithm>
#include<string>
using namespace std;
int mark[125];
char name[200002];
int main()
{
   long long int n,s;
   char c,d;
   for(int j='a';j<='z';j++)mark[j]=j;
    scanf("%lld%lld",&n,&s);
     cin>>name;
    for(int i=1;i<=s;i++){

    cin>>c>>d;
    for(int k='a';k<='z';k++){
    if(mark[k]==c)
        mark[k]=d;
    else if(mark[k]==d)mark[k]=c;
    }

    }
for(int i=0;i<n;i++)
{
    printf("%c",mark[name[i]]);
}
return 0;


}
