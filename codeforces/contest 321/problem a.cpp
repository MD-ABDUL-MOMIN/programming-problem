#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
     int n,num,p=0,q=1,ans=0,max=0,temp;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&num);
        if(i==1)p=num;
          temp=num;
        if(p<=temp)
        {
              p=temp;
            ++max;

        }
        else {
            if(ans<max)ans=max;
            max=1;
            p=num;
        }



    }
    if(ans<max)ans=max;
    //if(max==0)max=l-q+1;
    printf("%d\n",ans);

    return 0;
}

