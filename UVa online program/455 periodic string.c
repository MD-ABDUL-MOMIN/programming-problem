#include<stdio.h>
#include<string.h>
int main()
{
    char ch[80];
    int n,i,j,l,d,F;
    scanf("%d",&n);
    while(n-->0)
    {d=1;F=0;
        gets(ch);
        l=strlen(ch);
        d=ch[0];
        for(i=1;i<=l/2;i++)
        {
            if(d==ch[i])
            {
              while(ch[i]==ch[F])
              {
                  i++;F++;
              }
            }

        }

        printf("%d\n",d);
    }
    return 0;

}
