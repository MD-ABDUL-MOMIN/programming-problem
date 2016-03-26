#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char S[101],T[101];
    cin>>S;
   cin>>T;
    int L,k;
    L=strlen(S);
    k=L-1;
    while(S[k]=='z')
    {
        S[k]='a';
        k--;
    }
    S[k]=S[k]+1;
    if(strcmp(S,T)==0)cout<<"No such string"<<endl;
    else cout<<S<<endl;
    return 0;
}
