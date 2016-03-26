#include<bits/stdc++.h>
#include<string>

using namespace std;

int main()
{

    int n;
    scanf("%d",&n);
    getchar();
    while(n--)
    {char ch[10001],ch1[10001];
        gets(ch);

        int l=strlen(ch);
        for(int i=0;i<l;i++)
        {
            if((ch[i]>='a'&&ch[i]<='z')||(ch[i]>='A'&&ch[i]<='Z'))
                ch[i]+=2;

        }
        for(int i=l-1;i>=0;i--)
        printf("%c",ch[i]);

      printf("\n");
    }
    return 0;
}
