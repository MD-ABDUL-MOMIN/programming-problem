#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;
int ch[2001],serial[2001];

int main()
{
    int n,f[2002],cheak=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>f[i];
        ch[f[i]]++;
        serial[f[i]]=i+1;
        if(ch[f[i]]>=2)++cheak;

    }
    if(cheak<2)
        printf("NO\n");
        else{
            printf("YES\n");
            sort(f,n);
            for(int j=0;j<=2;j++)
            {if(j==0)
              for(i=0;i<n;i++)
                {  if(cheak[f[i])
                    printf("%2d",serial[f[i]]);
                }

             if(j==1)
                for(i=0;i<n;i++)

            }

        }

    return 0;

}
