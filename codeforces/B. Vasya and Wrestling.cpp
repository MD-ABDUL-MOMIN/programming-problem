#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,i,num,sum=0,p=0,tem,c=0,c1;
    vector<long long int>N1,N2;
    vector<long long int>N3,N4;
    scanf("%lld",&n);
    i=1;
    while(i<=n)
    {
        scanf("%lld",&num);
        tem=num;
        c1=num;
        if(i%2==1) {p=tem*-1;}
     else {
           if(p==tem)++c;
        }
        if(num>0) N1.push_back(num);
        else {
            num=num*-1;
            N2.push_back(num);
        }
        i++;
    }
    long long int s1,s2,v,v1;
    N3=N1;
    N4=N2;

    sort(N3.rbegin(),N3.rend());
    sort(N4.rbegin(),N4.rend());
    s1=N1.size();
    s2=N2.size();
    if(s1>s2) {v=s1;}
    else {v=s2;}
    int sig1=0,sig2=0;
   // cout<<s1<<' '<<s2<<v<<endl;
    for(int o=0;o<v;o++)
    {
        if(o>=s1){
                sum-=N4[o];

                if(sum<0){

                break;}

        }
        else if(o>=s2)

        { //cout<<sum<<endl;
            sum+=N3[o];
           //cout<<sum<<endl;
            if(sum>=0){break;}
        }
      else{ sum+=(N3[o]-N4[o]);

      }


    }
    //cout<<sum<<' '<<c<<' '<<c1<<endl;
    if(sum==0&&(sig1!=1&&sig2!=1))
    {
        if(c==(n/2)&&n%2==0)
        {

            if(c1<0)
                printf("second\n");
            else printf("first\n");
        }
       else if(N1>=N2)
            printf("first\n");
       else printf("second\n");
    }
    else
    {
        if(sum<0) sig1=1;
     else sig2=1;
        if(sig1==1)
    printf("second\n");
    else if(sig2==1)
        printf("first\n");
    }







    return 0;
}
