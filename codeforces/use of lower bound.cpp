#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{

    vector<int>A;
    A.push_back(1);
    A.push_back(2);
    A.push_back(3);
    A.push_back(4);
    A.push_back(5);
    A.push_back(6);
    A.push_back(7);
    A.push_back(8);
    A.push_back(9);
    A.push_back(10);
    vector<int>::iterator low;
    low=lower_bound(A.begin(),A.end(),5);
   int up=binary_search(A.begin(),A.end(),5);
    cout<<up<<endl;
    cout<<low-A.begin()<<endl;
}
