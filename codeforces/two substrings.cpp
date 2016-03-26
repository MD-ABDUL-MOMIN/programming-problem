
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string  ch;
    cin>>ch;

int sig=0,l,m,o,p;
     l=ch.find("AB");
      m=ch.find("BA",l+2);

    if(l>=0&&m>=0) sig=1;

    if(sig==0)
    {
           o=ch.find("BA");
          p=ch.find("AB",o+2);

      if(o>=0&&p>=0) sig=1;
    }
       if(sig==1) printf("YES\n");
    else printf("NO\n");


 return 0;

}
