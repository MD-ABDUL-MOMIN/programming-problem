#include<stdio.h>
#include<string.h>
int main()
{
    char ch[1000];
    gets(ch);
    int l,i=0,j=0,p=0,k=0;
    l=strlen(ch);
    while(i<l)
        {
        if(ch[i]=='1')
            {++j;
        if(j>=7){p=1;break;}
        }
        else j=0;
        if(ch[i]=='0')
        {
            ++k;
            if(k>=7){p=1;break;}
        }
        else k=0;
        i++;
        }
        if(p==1) printf("YES");
else printf("NO");


    return 0;
}
