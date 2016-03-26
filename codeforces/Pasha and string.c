#include<stdio.h>
#include<string.h>
/*int change(int a[200003],int m,int L);
int k=1;
int main()
{
    char ch[200002];
    long int i,j,M,position[200003],L,temp,N[200003];
    gets(ch);
    L=strlen(ch);
    for(i=1;i<=L;i++)N[i]=i;
    scanf("%d",&M);
    for(i=1;i<=M;i++){
        scanf("%ld",&position[i]);
        change(N,position[i],L);}

    for(i=1;i<=L;i++)
        printf("%c",ch[N[i]-1]);
    return 0;
}
int change(int a[],int m,int L)
{
    if(m<=L/2){
    int temp;
    temp=a[m];
    a[m]=a[L-m+1];
    a[L-m+1]=temp;

    return change(a,m+1,L);
    }
    else return a;

}
*/
int main()
{
    long int M,N[200003],i,j,flag[100001],L,state=0,temp;
    char ch[100001];
    scanf("%s",&ch);
    L=strlen(ch);
    scanf("%ld",&M);
    for(i=1;i<=M;i++)
    {
        scanf("%ld",&N[i]);
        flag[N[i]-1]++;
        flag[N[i]-1]%=2;
    }
    for(i=0;i<=L/2;i++)
    {
        state=(state+flag[i])%2;
        if(state==1)
        {
            temp=ch[i];
            ch[i]=ch[L-i-1];
            ch[L-i-1]=temp;
            //printf("%c %c\n",ch[L-i-1],ch[i]);
        }
    }
    //printf("\n");
    puts(ch);
    return 0;
}
