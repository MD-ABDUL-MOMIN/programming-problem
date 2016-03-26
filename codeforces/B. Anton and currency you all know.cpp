#include<bits/stdc++.h>

using namespace std;

int main()
{

    vector<string>num,V;
    long long int n,f,t;
    string ch;
    cin>>ch;
    num.push_back(ch);
    V=num;
   f=ch.size();

   long long int j=0,m=f-1,n1=f-1;
    for(long long i=0;i<f;i++)
    {
        if((num[0][i]-'0')%2==0)
        {
            if((num[0][f-1]-'0')>(num[0][i]-'0'))
            {  m=f-1;
             n1=i;
             break;
            }
            else {
                m=f-1;
                n1=i;
            }
        }
    }
   // cout<<"first ans second"<<num[0]<<' '<<V[0]<<endl;
    int tem;
    tem=num[0][m];
    num[0][m]=num[0][n1];
    num[0][n1]=tem;
 // cout<<"first ans second"<<num[0]<<' '<<V[0]<<endl;
    if(V==num)
        printf("-1\n");
    else{ cout<<num[0]<<endl;
    }




    return 0;
}

/*something change
int main()
{
    long long int n,tem,num=0,m,ten=1;
    scanf("%lld",&n);
    tem=n;
    int sig=0;


    while(n>0)
    {
        int rem;
        rem=n%10;
        if(rem%2!=0){
                num=rem*ten+num;

                ten=ten*10;
        }
        else if(rem%2==0&&sig==1)
        {
            num=rem*ten+num;
            ten=ten*10;
        }
        else {sig=1;m=rem;}


    n=n/10;

    }

    if(sig==1) {
        num=num*10+m;
            printf("%lld\n",num);
    }
    else printf("-1\n");

    return 0;
}
*/
