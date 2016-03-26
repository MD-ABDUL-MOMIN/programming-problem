#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<string>
#include<stack>
#include<queue>
using namespace std;
vector<int>ch;
vector<int>::iterator i;
int main()
{
    ch.push_back(11);
    ch.push_back(12);
    ch.push_back(10);
    ch.push_back(103);
    sort(ch.begin(),ch.end());
    for(i=ch.begin();i<ch.end();i++)
        cout<<*i<<endl;

    return 0;

}
