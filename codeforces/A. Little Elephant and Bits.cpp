#include<bits/stdc++.h>

using namespace std;


int main()
{

   string ch;
   cin>>ch;
   int b=0,c=0;
   getchar();
    long long int l=ch.size();
   for(long long int i=0;i<ch.size();i++){
        if(ch[i]=='1')c=1;
        if((ch[i]=='0'&&b==0&&c==1)||(i==(l-1)&&b==0))b=1;
        else
          printf("%c",ch[i]);
   }



return 0;
}


/*
int main()
{
   vector<char>number;
   string ch;
   cin>>ch;
   int b=0,c=0;
   getchar();
    long long int l=ch.size();
   for(long long int i=0;i<ch.size();i++){
        if(ch[i]=='1')c=1;
        if((ch[i]=='0'&&b==0&&c==1)||(i==(l-1)&&b==0))b=1;
        else
            number.push_back(ch[i]);
   }


  for(size_t i=0;i<number.size();i++)
     printf("%c",number[i]);


    //getchar();
    //long long int n=number.size();
}
*/

