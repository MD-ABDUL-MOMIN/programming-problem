#include<iostream>
using namespace std;

class rectangle{
    int height;
     int width;
 public:
     int area();
     rectangle(int w,int h);
     ~rectangle();
};
int rectangle::area()
{
    return height*width;
}
rectangle::rectangle(int w,int h)
{
    height=w;
    width=h;
    cout<<"Constructor"<<endl;
}
rectangle::~rectangle()
{

cout<<"destructor"<<endl;
cout<<area()<<endl;
}
int main()
{
    rectangle obj(4,5),obj1(3,1);

    cout<<obj.area()<<endl;
    cout<<obj1.area()<<endl;
    return 0;
}
