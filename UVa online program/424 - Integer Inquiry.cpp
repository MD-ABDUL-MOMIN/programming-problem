#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char text[101];
    int i=0,j,l=0,k,p,r,s;
    while(cin>>text&&text!="0")
    {

        cout<<text<<endl;
        p=strlen(text);
        if(l<p)l=p;
        i++;
    }

    int sum=0,tex[105];
    for(k=0;k<l;k++)
    {  sum=0;
        for(j=0;j<i;j++){
                if(text[j][k]!='\0')
                sum+=(text[j][k]-'0');
           }
           sum+=s;
           tex[r++]=sum%10;
           s=sum/10;


    }
    if(s!=0)tex[r++]=s;
    for(i=0;i<r;i++)
        cout<<tex[i];

    }
    return 0;
}
