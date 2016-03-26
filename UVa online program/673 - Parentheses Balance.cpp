#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    getchar();


    while(n--)
    {

 stack<char>B;

    char c[129];
    char d;
    gets(c);

    int p=0;


    for(int i=0;i<strlen(c);i++)
    {

         if(c[i]=='('||c[i]=='{'||c[i]=='[')
            {
                B.push(c[i]);

            }
        else{
                if(B.empty())p=1;
                if(p==0)
                {


            d=B.top();
            if(d=='('&&c[i]==')')
                B.pop();
            else if(d=='{'&&c[i]=='}')
                B.pop();
                else if(d=='['&&c[i]==']')
                    B.pop();
                    else p=0;
                }
        }
        }


    if(!B.empty()||p==1)printf("No\n");
    else cout<<"Yes"<<endl;

    }


    return 0;
}
