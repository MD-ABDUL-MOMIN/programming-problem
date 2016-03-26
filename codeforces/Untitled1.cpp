#include<iostream>
using namespace std;
#include<stdio.h>
int main()
{
    FILE *fp;
    if(fp=fopen("myfile.txt","r")==NULL)
    {
        cout<<"Error opening file"<<endl;
    }
    //exit(1);
}
