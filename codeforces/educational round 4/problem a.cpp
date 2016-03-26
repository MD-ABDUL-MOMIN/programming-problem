#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,p,q,ans,j;
    scanf("%d%d%d",&n,&p,&q);
    getchar();
    string S;
    cin>>S;
    if(n%p==0||n%q==0||n%(p+q)==0)
    {
        int m,ans;
        if(n%p==0) m=p;
        else if(n%q==0) m=q;
        else m=(p+q);
        ans=n/m;
        int i=0;

        if(m!=(p+q))
        {  cout<<ans<<endl;


        while(i<n)
        {
            int j=i;
            while(j<(i+m))
            {
                cout<<S[j];
                ++j;
            }
            cout<<'\n';
            i=j;
            //i++;
        }
        }
        else {cout<<ans*2<<endl;
                int D=p;
                p=max(p,q);

                if(p==q)q=D;
                //q=min(p,q);
                int x=n/p;
                int s=p;
        int y=(n-x*p)/q;int c=q;
        int i=1,j=0;
          while(i<=y)
          {
              while(j<q)
              {
                  cout<<S[j];
                  j++;
              }
              cout<<'\n';
              q+=c;
              i++;
          }
          i=1;
             p+=(j);
           while(i<=x)
          {
              while(j<=q)
              {
                  cout<<S[j];
                  j++;
              }
              cout<<'\n';
              p+=s;
              i++;
          }




        }


        }

    else if(n%p==q||n%q==p||n%(p+q)==p||n%(p+q)==q)
    {  int m,d;
        if(n%p==q)m=p,d=q;
           else if(n%q==p)m=q,d=p;
        else if(n%(p+q)==p) m=(p+q),d=p;
        else m=(p+q),d=q;
        int i=0;
        ans=(n/m);
        if(m!=p+q){

        cout<<ans+1<<endl;
        while(i<(n-d))
        {
            int j=i;
            while(j<(i+m))
            {
                cout<<S[j];
                j++;
            }
            cout<<'\n';
            i=j;
            //i++;
        }
        while(i<n)
        {cout<<S[i];i++;}

    }

    else {

        {cout<<ans*2<<endl;
                int D=p;
                p=max(p,q);

                if(p==q)q=D;
                //q=min(p,q);
                int x=n/p;
                int s=p;
        int y=(n-x*p)/q;int c=q;
        int i=1,j=0;
          while(i<=y)
          {
              while(j<q)
              {
                  cout<<S[j];
                  j++;
              }
              cout<<'\n';
              q+=c;
              i++;
          }
          i=1;
             p+=(j);
           while(i<=x)
          {
              while(j<=p)
              {
                  cout<<S[j];
                  j++;
              }
              cout<<'\n';
              p+=s;
              i++;
          }

    }
    while(j++<n)
    {
        cout<<S[j];

    }
    cout<<'\n';
    }
}
    else cout<<"-1"<<endl;

    return 0;
}
