#include<iostream>
using namespace std;

int main()
{
    int *ptr;
    ptr = new int[4];
    ptr[0]=3;
    ptr[1]=2;
    ptr[2]=4;
    ptr[3]=5;

    cout<<*(ptr+0)<<endl;
    delete (ptr);
    cout<<*(ptr+1)<<endl;
    cout<<*(ptr+2)<<endl;
    cout<<*(ptr+3)<<endl;


    return 0;
}
