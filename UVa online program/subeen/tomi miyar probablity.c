#include<stdio.h>
#include<string.h>
int main()
{
    char ch[1000],ch1[1000];
    int T;
    scanf("%d",&T);
    getchar();
    while(T-->0)
    {
        gets(ch);
        int L,i=0,j,k=0,l,m=0;
        L=strlen(ch);
        while(i<L)
        {
            if(ch[i]!=' ')
            {
                ch1[k]=ch[i];k++;
                l=k;
            }
            else{k=0;
                for(j=i+1;j<L;j++)
                {
                    if(ch1[k]==ch[j]&&ch[j]!=' ')
                    {k++;
                        if(l==k){++m;}
                    }
                }
                k=0;
            }
            i++;
        }
        printf("\n%d",m);
    }
    return 0;

}
