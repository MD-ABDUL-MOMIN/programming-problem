#include<iostream>
using namespace std;

class rectangle{
private:
    int height;
    int width;
public:

    int area();
    rectangle(int H, int W);
  ~rectangle();
    };

int rectangle::area()
{
    return height*width;
}
rectangle::rectangle(int H, int W)
{
  height=H;
  width=W;
 // cout<<"constructor"<<H*W<<endl;

}
rectangle::~rectangle()
{
   // cout<<"distructor"<<area()<<endl;
}
int main()
{
    rectangle obj(4,5),obj1(4,10);
    cout<<obj.area()<<endl;
    cout<<obj1.area()<<endl;
    obj1=obj;
    cout<<obj.area()<<endl;
    cout<<obj1.area()<<endl;
      return 0;
}
