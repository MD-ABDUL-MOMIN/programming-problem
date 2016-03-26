#include<stdio.h>
#include<string.h>
int main()
{
    char line[10000];
    while(gets(line))
    {
        int l,i,j=0,k=1;
        l=strlen(line);
        for(i=0;i<l;i++)
        {
            if((line[i]>='a'&&line[i]<='z')||(line[i]>='A'&&line[i]<='Z')){
               if(k==1){k=0;++j;}
            }
        else {k=1;}
        }
        printf("%d\n",j);
    }
    return 0;
}
