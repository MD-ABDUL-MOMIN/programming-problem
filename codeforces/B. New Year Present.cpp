#include<bits/stdc++.h>

using namespace std;

int main()
{
    string robot;
    int n,coin[303];
    scanf("%d",&n);
    long long int sum=0;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&coin[i]);
        sum+=coin[i];
    }

    while(sum>0)
    {
        for(int i=1;i<n;i++)
        {
            if(coin[i]>0)
            {
                --coin[i];
                --sum;
                robot+='P';
                if(sum==0)break;
            }
                robot+='R';
        }
        if(sum>0)
        {
            for(int j=n;j>1;j--)
            {
                if(coin[j]>0)
                {
                    --coin[j];
                    --sum;
                    robot+='P';
                    if(sum==0)break;
                }

                    robot+='L';
            }
        }
    }
    cout<<robot<<endl;


    return 0;

}
