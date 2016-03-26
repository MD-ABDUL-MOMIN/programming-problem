#include<bits/stdc++.h>
#include<algorithm>
#include<unordered_set>

using namespace std;
int main() {
	int n; cin >> n; n = 0;
	unordered_set<int> x;
	for (int a; cin >> a; x.insert(a)) {
		while (x.count(a) > 0) ++n, ++a;
	}
cout << n << '\n';
}

/*


using namespace std;
int s[10000];
int main()
{
    int n;
    scanf("%d",&n);
    long long int sum=0,ans=0,min;
    int N[3001];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&N[i]);
       // if(min>N[i])
            //min=N[i];

    }
    sort(N,N+n);
    //for(int i=0;i<n;i++)
    //cout<<N[i]<<endl;
    int k=0;
    min=0;
    while(k<n)
    {
        if(min>=N[k])
        {
            ans+=(min-N[k]);

            ++min;
        }
        else {
            min=N[k];
           // ans+=1;
           ++min;
         }

          ++k;

          //cout<<ans<<endl;
    }

    /*for(int i=1;i<=n;i++)
    {
        scanf("%d",&N[i]);
        //++s[N[i]];
    }

    accepted
    for(int i=1;i<=n;i++)
    {
        if(s[N[i]]>1){
                --s[N[i]];
       while(s[N[i]]!=0)
        {
            ans+=1;
           s[++N[i]];

        }
      s[N[i]]=1;
    }
    }

    cout<<ans<<endl;

    return 0;
}
*/
