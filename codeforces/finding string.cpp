#include<bits/stdc++.h>

using namespace std;

int main()
{
    string ch;
    cin>>ch;
    int ld,lu,lc,lk;
    ld=ch.find('d');
    lu=ch.find('u');
    lc=ch.find('c');
    lk=ch.find('k');
    if(ld>=0)
    {
        if(ld<lu&&lu<lc&&lc<lk){
        cout<<"YES"<<endl;
        return 0;}


    }
    printf("NO\n");

    return 0;


}
