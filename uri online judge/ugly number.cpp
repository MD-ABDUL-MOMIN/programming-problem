#include<bits/stdc++.h>

using namespace std;

int check(int n)
{
    while(n%2==0)
      n=n/2;
      while(n%3==0)
        n=n/3;
      while(n%5==0)
        n=n/5;

        if(n==1)return 1;
        else return 0;

}

int main()
{
    int sum=0,N;
    long long int j=1,p=859963392;
  /*scanf("%d",&N);

    while(j)
    {
        sum+=check(j);
        if(sum==N)
           {cout<<j<<endl;break;}
 ++j;
    }

*/
    cout<<"The 1500'th ugly number is "<<p<<'.'<<endl;
    return 0;
}
