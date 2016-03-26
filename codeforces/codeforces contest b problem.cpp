#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char ch[102][102],temp[102];
    int i,j,k=1,n;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>ch[i];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(strcmp(ch[j],ch[j+1])<0)
            {
                strcpy(temp,ch[j]);
                strcpy(ch[j],ch[j+1]);
                strcpy(ch[j+1],temp);
            }

        }
    }
    int p=1;
    for(i=0;i<n-1;i++)
        if(strcmp(ch[i],ch[i+1])==0){
            ++k;
            if(p<k)p=k;
        }
            else {

                k=1;
            }
    cout<<p<<endl;

    return 0;

}
