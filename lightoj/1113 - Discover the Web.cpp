#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t=1,T;
    stack<string>FORWARD_stack,Back_stack;
    FORWARD_stack.push("http://www.lightoj.com/");
    Back_stack.push("http://www.lightoj.com/");
   // string r="http://www.lightoj.com/";
    scanf("%d",&T);
    while(t<=T)
    {
        cout<<"Case "<<t<<':'<<endl;
        string Order,url,r;
        int p=0,q=0;
      while(cin>>Order&&Order!="QUIT")
        {
            if(Order=="VISIT")
        {
            cin>>url;
         FORWARD_stack.push(url);
          Back_stack.push(url);
            cout<<url<<endl;
            //r=FORWARD_stack.top();
            r=url;
      p=0,q=0;

        }
        else if(Order=="BACK")
        {
           FORWARD_stack.push(r);
            if(p!=1)Back_stack.pop();
            if(!Back_stack.empty())
            {
                  cout<<Back_stack.top()<<endl;
                  r=Back_stack.top();
                  p=0;
            }

            else {cout<<"Ignored"<<endl;p=1;}
            q=0;

        }
        else if(Order=="FORWARD")
        {
             Back_stack.push(r);
             if(q!=1)FORWARD_stack.pop();
            if(!FORWARD_stack.empty())
            {
               r=FORWARD_stack.top();
               cout<<r<<endl;
               q=0;
            }

                else {cout<<"Ignored"<<endl;q=1;}
                p=0;

        }



        }


        t++;
    }
    return 0;
}
