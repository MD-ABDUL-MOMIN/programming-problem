#include<bits/stdc++.h>
#include<algorithm>


using namespace std;

int main()
{
    unsigned long long int a,b,tem,c;
    scanf("%d",&c);
    int digit[10]={0};
    scanf("%llu",&a);
    while(a!=0)
    {
        int rem=a%10;
        if(rem==2||rem==3||rem==5||rem==7)
        ++digit[rem];
        else {
            if(rem==4) {++digit[3],digit[2]+=2;}
            else if(rem==6){
                ++digit[5],++digit[3];
            }
            else if(rem==8){
                ++digit[7];digit[2]+=3;}
                else if(rem==9){
                    ++digit[7];digit[3]+=2;++digit[2];
                }
                //else ++digit[rem];

        }

        a=a/10;
    }
    for(int i=9;i>1;i--)
    {
        if(digit[i]>0)
        {
            for(int j=1;j<=digit[i];j++)
                printf("%d",i);
        }
    }
    string ch="MOMIN";
    sort(ch.begin(),ch.end());
    cout<<ch<<endl;




    return 0;
}
