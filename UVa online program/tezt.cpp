#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream inputfile;
    int x,sum=0;
    inputfile.open("text.txt");
    if(!inputfile)
    {
        cout<<"There was occured error";
        return 0;;
    }
    while(inputfile>>x)
    {
        sum+=x;
    }
    inputfile.close();
    cout<<sum<<endl;


}
