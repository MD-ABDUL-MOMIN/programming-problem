#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,i,value,A=0;
    list<long long int>num,ans,num1,num2;
   list<long long int>::iterator l,m;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&value);
        num.push_back(value);
    }
    ans=num;
    num.sort();
    num1=num;
    num2=ans;



while(ans!=num)
{
    l=num.end();
    --l;
    num.remove(*l);
    ans.remove(*l);
    ++A;

}
cout<<num.size()<<endl;
long long int B=n;
if(n/2<A){B=-1;
while(num1!=num2)
{
    l=num1.begin();
    ++l;   ++B;
    num1.remove(*l);
    num2.remove(*l);


}
if(B==-1)B=0;
}


cout<<min(A,B)<<endl;


return 0;
}
