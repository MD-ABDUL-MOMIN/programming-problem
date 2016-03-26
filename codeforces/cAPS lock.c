#include<stdio.h>
#include<string.h>
int main()
{
    char word[100];
    while(gets(word))
    {
        int i,l,k=0;
        l=strlen(word);
        for(i=1;i<l;i++)
        {
            if((((word[0]>='A'&&word[0]<='Z')||(word[0]>='a'&&word[0]<='z'))&&(word[i]>='A'&&word[i]<='Z')))
                k=0;
            else {k=1;break;}
        }
        if(k==1){puts(word);}
        else {for(i=0;i<l;i++)
            {if(word[i]>='a'&&word[i]<='z')
                word[i]=word[i]-'a'+'A';
        else word[i]=word[i]-'A'+'a';
        printf("%c",word[i]);
            }

    }
    printf("\n");
    }
    return 0;
}
