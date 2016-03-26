#include<bits/stdc++.h>
#include<string>

using namespace std;

int main()
{
    char sen[10000];
    int i;
    while(gets(sen)&&sen[0]!='*')
    {
        int len,sig=0;
        len=strlen(sen);
        for(i=0;i<len-1;i++)
        {
            if(sen[i]==' '&&tolower(sen[i+1])!=tolower(sen[0])){
                sig=1;break;
            }
        }
        if(sig==0)printf("Y\n");
        else printf("N\n");
    }
    return 0;
}
