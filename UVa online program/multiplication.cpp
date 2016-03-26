#incldue<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string ch,ch1;
    int sum[10000],l1,l2,d;
    for(i=0;i<10000;i++)sum[i]=0;
    cin>>ch>>ch1;
    l1=ch.size();
    l2=ch1.size();
    for(i=0;i<l2;i++)
    {
        for(j=0;j<l1;j++)
        {
            d=((ch1[i]-'0')*(ch[j]-'0'));
            sum[j+i]+=(d%10);
            sum[j+i+1]+=(d/10);
        }
    }
}
