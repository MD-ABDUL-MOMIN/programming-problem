#include<iostream>

using namespace std;
char ch(string c,int count);
int main()
{
    int co;
    string c;
    cout<<"Enter the value of string and number"<<endl;
    cin>>c>>co;
    ch(c,co);
    return 0;

}
char ch(string c,int count)
{
    int i;
    for(i=0;i<count;i++)
        cout<<c<<endl;
}
