#include<stdio.h>
#include<string.h>

typedef long long int ll;

main()
{

    char s[200001],t[200001];
    int l,i,j,k;




    int a[26][26] = {0},ans = 0;
    scanf("%d%s%s",&l,s,t);
    for(i=0;i<l;i++)
    {
        if(s[i]!=t[i])
        {
            ++ans;
            a[s[i]-'a'][t[i]-'a'] = i+1;
        }
    }

    for(i=0;i<26;i++)
    {

        for(j=0;j<26;j++)
        {
            if(i!=j){


            if(a[i][j]>0 && a[j][i]>0)
            {
                printf("%d\n%d %d\n",ans-2,a[i][j],a[j][i]);
                return 0;
            }
            }
        }
    }

    for(i=0;i<26;i++)
    {
        for(j=0;j<26;j++)
        {
            if(i!=j)
            {
                if(a[i][j]>0)
                {
                    for(k=0;k<26;k++)
                    {
                        if(a[j][k]>0)
                        {
                            printf("%d\n%d %d\n",ans-1,a[i][j],a[j][k]);
                            return 0;
                        }
                    }
                }
            }
        }
    }

    printf("%d\n%d %d\n",ans,-1,-1);
    return 0;

}
