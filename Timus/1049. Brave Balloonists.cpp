#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    double M=1;
    int n,i=0;
    while(cin>>n&&i<=9){
            i++;
      M*=(double)sqrt(n);

    }
       cout<<M;


        return 0;
}

