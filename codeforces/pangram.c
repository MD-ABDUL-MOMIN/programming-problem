#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,j,p=0;
    char ch[105],k;
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
        scanf("%c",&ch[i]);
        if(n<26)printf("NO\n");
    else{for(k='a';k<='z';k++)
    { p=0;
        for(j=0;j<n;j++)
        {
            if(k==tolower(ch[j])){p=1;

            }
        }
        if(p==0)break;
    }
    if(p==0)printf("NO\n");
    else printf("YES\n");
}
return 0;
}
