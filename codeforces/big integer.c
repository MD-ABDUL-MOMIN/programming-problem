#include<stdio.h>
#include<string.h>
int main()
{
    char ch[10000]={0},ch1[10000]={0},sum[100000];
    int i,j,k,l,temp=0,d;
    scanf("%s",&ch);
    scanf("%s",&ch1);
    int c,e;
    c=strlen(ch);
    e=strlen(ch1);
    if(c>e)l=c;
    else l=e;
    //printf("%d",l);
    strrev(ch);
    strrev(ch1);
    for(i=0;i<l;i++)
    {
        if(ch[i]<='0'||ch[i]>'9')
        ch[i]='0';
        if(ch1[i]<='0'||ch1[i]>'9')
        ch1[i]='0';
        //d=ch[i]-ch1[i]+temp;for minus
        //d=ch[i]+ch1[i]-'0'-'0'+temp;for summation//
        sum[i]=d%10+'0';
        temp=d/10;
        if(temp>0&&i==l-1){sum[++i]=temp+'0';break;}
        else if(temp<=0&&i==l-1){i=i;break;}
        else continue;
    }
    for(l=i;l>=0;l--)
    printf("%c",sum[l]);


}
