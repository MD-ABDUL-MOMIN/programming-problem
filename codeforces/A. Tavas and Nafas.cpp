#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    string less_twenty[]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty"};
    string up_twenty[]={"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
 int a;
 cin>>a;
 if(a<=20)
 cout<<less_twenty[a]<<endl;
 else {
    int b=a/10;
    if(a%10!=0)
    cout<<up_twenty[b]<<'-'<<less_twenty[a%10]<<endl;
    else cout<<up_twenty[b]<<endl;
 }


return 0;
}

