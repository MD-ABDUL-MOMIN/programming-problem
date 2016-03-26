#include<stdio.h>
#include<string.h>
int main()
{

    char letter[1001];
    int F[256],i,j=0,k;
    gets(letter);
   /* for(i=0;i<255;i++)F[i]=0;
    for(i=0;letter[i];i++)F[letter[i]]++;
    for(i=0;letter[i];i++)
    {
        if(letter[i]>='a'&&letter[i]<='z')
        {
            if(F[letter[i]]>0)
            {
                ++j;
                F[letter[i]]=0;
            }
        }
    }
    */
    for(i='a';i<='z';i++)
    {
        for(k=0;letter[k];k++)
        {
            if(i==letter[k]){++j;break;}
        }
    }
    printf("%d\n",j);
    return 0;
}
