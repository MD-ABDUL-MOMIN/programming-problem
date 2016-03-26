#include<bits/stdc++.h>
using namespace std;

class abc{
   public:
    int height;
    int width;
    int area();

};
int abc::area()
{
    return height*width;
}


int main()
{
   // abc ob,ob2;
   // ob.height=5;
    //ob.width=10;
    int d=sizeof(abc);
    cout<<d<<endl;
    //cout<<ob.area()<<endl;


      return 0;
}
