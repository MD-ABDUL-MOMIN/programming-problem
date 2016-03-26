#include<bits/stdc++.h>

using namespace std;

int check(char ch[],int l,int mod)
{
    int p=0,rem;
    for(int i=0;i<l;i++)
    {
         rem=(ch[i]-'0'+p)%7;
         p=rem*10;
    }
    if(rem==0) return 1;

    else 0;
}

int main()
{
    char year[1002];
    gets(year);
    int l=strlen(year),rem;
    int ans=check(year,l,7);
    if(ans==0) printf("NOT DIVISIBLE\n");
    else printf("DIVISIBLE");

    return EXIT_SUCCESS;
}
