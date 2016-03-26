#include<bits/stdc++.h>

using namespace std;

int main()
{
    string D,d2;
    char d1[1000];
    int n;
    scanf("%d",&n);
    getchar();
    D+='/';
    while(n--)
    {
        gets(d1);
        d2=d1;

        if(d2=="pwd")
            cout<<D<<endl;
            else {
                for(int i=3;i<strlen(d1);i++)
                {
                    if(d1[i]=='.'&&d1[i+1]=='.')
                    {
                        for(int j=D.size()-1;D[j]!='/';j--)
                            D[j]='\0';
                            i+=3;
                    }
                    else D+=d1[i];
                }
            }



    }



  //int l=Direction.size();
//for(int i=l-1;Direction[i]!='/';i--)
   //  Direction[i]='\0';
    //cout<<Direction<<endl;
    return 0;
}
