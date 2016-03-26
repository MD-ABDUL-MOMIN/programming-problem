#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    int n,a[5],b[5];
    long long int area;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {

            scanf("%d%d",&a[i],&b[i]);
    }

    if(n==1)area=-1;
    else if(n==2){
        if(b[1]==b[2]||a[1]==a[2])area=-1;
        else {area=(a[1]-a[2])*(b[2]-b[1]);
        if(area<0)area=area*-1;
        }

    }
    else if(n==3)
    {
        if(b[1]==b[2])
        {
            area=(a[1]-a[2])*(b[2]-b[3]);

            if(area<0)area*=-1;
        }
        else area=-1;
    }
    else{
            if(b[1]==b[2]&&a[1]==a[4]&&a[3]==a[2]&&b[4]==b[3]){
           area=(a[1]-a[2])*(b[1]-b[4]);
           if(area<0)area=area*-1;
            }
            else area=-1;



    }
    if(area==0)area=-1;
    cout<<area<<endl;
    return 0;



}
