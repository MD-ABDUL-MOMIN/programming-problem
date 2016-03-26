#include<bits/stdc++.h>

using namespace std;

int main()
{
    string word,ans,ans1;
    int k,Counter[256]={0},signal=0;
    scanf("%d",&k);
    getchar();
    cin>>word;
    int len=word.size();
    if(len%k==0){
    for(int i=0;i<len;i++)
    {

        ++Counter[word[i]];
    }
    for(int i='a';i<='z';i++)
    {
        if(Counter[i]%k!=0){signal=1;break;}
      if(Counter[i]>0){
           int d=Counter[i]/k;
            for(int j=1;j<=d;j++)
                ans+=i;
      }
    }

    }
    else signal=1;
    if(signal==0)
    { for(int i=1;i<=k;i++)
       ans1+=ans;
        cout<<ans1<<endl;
    }
    else printf("-1\n");

    return 0;
}
